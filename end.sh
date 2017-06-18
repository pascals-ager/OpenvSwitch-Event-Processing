ovs-vsctl del-port br0 vhost-user1
ovs-vsctl del-port br0 vhost-user2
ovs-vsctl del-port br0 vhost-user3

ovs-vsctl del-br br0
ovs-appctl -t ovs-vswitchd exit
ovs-appctl -t ovsdb-server exit
