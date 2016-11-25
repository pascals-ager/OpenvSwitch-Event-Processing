cd /usr/src/cep/ovs-2.6.1
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
				 
ovs-vsctl --no-wait init
ovs-vswitchd --pidfile --detach

ovs-appctl vlog/set netdev_linux:syslog:dbg && ovs-appctl vlog/set dpif_netdev:syslog:dbg && ovs-appctl vlog/set netlink_socket:syslog:dbg && ovs-appctl vlog/set ofproto_dpif_upcall:syslog:dbg && ovs-appctl vlog/set ofproto_dpif:syslog:dbg


