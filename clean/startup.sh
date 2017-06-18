cd /home/advith/cep/thesis-advith-cep/clean/openvswitch-2.6.1
mkdir -p /usr/local/etc/openvswitch 
rm /usr/local/etc/openvswitch/conf.db 
mkdir -p /usr/local/var/run/openvswitch

ovsdb-tool create /usr/local/etc/openvswitch/conf.db vswitchd/vswitch.ovsschema

ovsdb-server --remote=punix:/usr/local/var/run/openvswitch/db.sock \
                 --remote=db:Open_vSwitch,Open_vSwitch,manager_options \
                 --private-key=db:Open_vSwitch,SSL,private_key \
                 --certificate=db:Open_vSwitch,SSL,certificate \
                 --bootstrap-ca-cert=db:Open_vSwitch,SSL,ca_cert \
                 --pidfile --detach

export DB_SOCK=/usr/local/var/run/openvswitch/db.sock
ovs-vsctl --no-wait set Open_vSwitch . other_config:dpdk-init=true				 
ovs-vsctl --no-wait set Open_vSwitch . other_config:dpdk-socket-mem="4096,4096"
#ovs-vsctl --no-wait set Open_vSwitch . other_config:dpdk-lcore-mask=0x300
ovs-vsctl --no-wait set Open_vSwitch . other_config:dpdk-extra=--vhost-owner libvirt-qemu:kvm --vhost-perm 0666
ovs-vswitchd --pidfile --detach 
ovs-vsctl --no-wait init
#ovs-ctl --no-ovsdb-server --db-sock="$DB_SOCK" start
#ovs-vswitchd --pidfile --detach
#ovs-vsctl -- --bootstrap set-ssl /usr/src/cep/sc-privkey.pem \
 # /usr/src/cep/sc-cert.pem \
  #/usr/local/var/lib/openvswitch/pki/controllerca/cacert.pem

ovs-vsctl add-br br0 -- set bridge br0 datapath_type=netdev
ovs-vsctl add-port br0 vhost-user1 -- set Interface vhost-user1 type=dpdkvhostuser
ovs-vsctl add-port br0 vhost-user2 -- set Interface vhost-user2 type=dpdkvhostuser 

ovs-vsctl add-port br0 vhost-user3 -- set Interface vhost-user3 type=dpdkvhostuser 


#cd /usr/local/var/run/openvswitch
#sudo chown libvirt-qemu /usr/local/var/run/openvswitch/vhost-user1
#sudo chown libvirt-qemu /usr/local/var/run/openvswitch/vhost-user2


#ovs-vsctl add-port br0 dpdk-p0 -- set Interface dpdk-p0 type=dpdk \
#    options:dpdk-devargs=0000:00:0a.0
#ovs-vsctl add-port br0 dpdk-p1 -- set Interface dpdk-p1 type=dpdk \
 #   options:dpdk-devargs=0000:00:09.0

	#ovs-vsctl set-controller br0 tcp:127.0.0.1:6633
#ovs-vsctl set bridge ovsbr0 protocols=OpenFlow10


#sh veth-setup.sh

#ryu-manager --ctl-privkey /usr/src/cep/controller-privkey.pem \
#             --ctl-cert /usr/src/cep/controller-cert.pem \
#             --ca-certs /usr/local/var/lib/openvswitch/pki/switchca/cacert.pem \
#             --verbose

#ryu-manager --verbose

#ovs-appctl vlog/set netdev_linux:syslog:dbg && ovs-appctl vlog/set dpif_netdev:syslog:dbg && ovs-appctl vlog/set netlink_socket:syslog:dbg && ovs-appctl vlog/set ofproto_dpif_upcall:syslog:dbg && ovs-appctl vlog/set ofproto_dpif:syslog:dbg && ovs-appctl vlog/set flow_extract:syslog:dbg

