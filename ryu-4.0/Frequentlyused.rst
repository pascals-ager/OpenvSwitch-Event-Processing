./configure --enable-coverage --enable-Werror && make && make install

ovs-ofctl add-flow br0  priority=1111,dl_type=0x0800,nw_proto=17,nw_dst=10.1.1.1,tp_dst=9876,udp_pyd=30,udp_pyd1=31,e_attr1=30,e_attr2=31,e_val1=30,e_val2=31,e_type=65,e_op1=60,e_op2=62,actions=
 


pip uninstall ryu

pip install .
  
  
ryu-manager --ctl-privkey /usr/src/cep/controller-privkey.pem \
              --ctl-cert /usr/src/cep/controller-cert.pem \
              --ca-certs /usr/local/var/lib/openvswitch/pki/switchca/cacert.pem \
              --verbose
			  
ryu-manager --default-log-level=10 ryu/app/ofctl_rest.py
