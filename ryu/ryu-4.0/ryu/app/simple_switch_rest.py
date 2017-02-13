import json

from ryu.app import simple_switch
from webob import Response
from ryu.controller import ofp_event
from ryu.controller.handler import CONFIG_DISPATCHER
from ryu.controller.handler import set_ev_cls
from ryu.app.wsgi import ControllerBase, WSGIApplication, route
from ryu.lib import dpid as dpid_lib

simple_switch_instance_name = 'simple_switch_api_app'
url = '/simpleswitch/mactable/{dpid}'

class SimpleSwitchRest10(simple_switch.SimpleSwitch):
'''
This class is an extension of SimpleSwitch within simple_switch.py file. It enables updating the MAC address table.
Here the flow entry is added to the switch. So, the FeaturesReply method is overridden and holds the datapath object.
'''

	_CONTEXTS = {'wsgi' : WSGIApplication}

	'''
	Class variable _CONTEXT is used to sprecify Ryu's WSGI-comptible Web server class. By doing so, WSHI's web server 
	instance can be acquired by a key called wsgi key.
	'''	

	def __init__(self, *args, **kwargs):
		super(SimpleSwitch,self).__init__(*args,**kwargs)
		self.switches = {}
		wsgi = kwargs['wsgi']
		wsgi.register(SimpleSwitchController,
						{simple_switch_instance_name: self})
	'''
	Constructor acquires the instance od WSGIApplicaiton in order to register the ćontroller class. For registration, the register method is used.
	When executing register method, the dictionary object is passed in the key name simple_switch_api_app so that the contructor of the controller
	can access the instance of the SimpleSwitchRest10 class.
	'''


	@set_ev_cls(ofp_event.EventOFPSwitchFeatures, CONFIG_DISPATCHER)	
	def switch_features_handler(self,ev):
		supre(SimpleSwitchRest10,self).switch_features_handler(ev)
		datapath = ev.msg.datapath
		self.switches[datapath.id] = datapath
		self.mac_to_port.setdefault(datapath.id, {})

	'''
	'''	


	def set_mac_to_port(self, dpid, entry):
		mac_table = self.mac_to_port.setdefault(dpid, {})
		datapath = self.switches.get(dpid)

		entry_port = entry['port']
		entry_mac = entry['mac']

		if datapth is not None:
			parser = datapath.ofproto_parser
			if entry_port not in  mac_table.values():

				for mac,port in mac_table.items():

					# from known device to new device
					actions = [parser.OFPActionOutput(entry_port)]
					match = parser.OFPMatch(in_port=port, eth_dst=entry_mac)
					self.add_flow(datapath,1,match,actions)

				mac_table.update({entry_mac: entry_port})	
		return mac_table
		
class SimpleSwitchController(ControllerBase):

'''
This class is controller class. It defines the URL to receive the HTTP request and its corresponding method.
'''
	def __init__(self, req, link, data, **config):
		super(SimpleSwitchController, self).__init__(req,link,data,**config)
		self.simple_switch_app = data[simple_switch_instance_name]

	@route('simpleswitch', url, methods = ['GET'],
			requirements={'dpid':dpid_lib.DPID_PATTERN})
	def list_mac_table(self, req, **kwargs):
		
		simple_switch = self.simple_switch_app
		dpid = dpid_lib.str_to_dpid(kwargs['dpid'])

		if dpid not in  simple_switch.mac_to_port:
			return Response(status=404)

		mac_table = simple_switch.mac_to_port.get(dpid, {})
		body = json.dumps(mac_table)
		return Response(content_type='application/json', body=body)

	@route('simpleswitch', url, methods=['PUT'],
			requirements={'dpid':dpid_lib.DPID_PATTERN})
	def put_mac_table(self, req, **kwargs):

		simple_switch=self.simple_switch_app
		dpid = dpid_lib.str_to_dpid(kwargs['dpid'])		

		try:
			new_entry = req.json if req.body else{}
		except ValueError:
			raise Response(status=400)

		if dpid not in simple_switch.mac_to_port:
			return Response(status=404)
		try:
			mac_table = simple_switch.set_mac_to_port(dpid, new_entry)
			body = json.dumps(mac_table)		
			return Response(content_type='application/json', body=body)
		except Exception as e:
			return Response(status=404)	

