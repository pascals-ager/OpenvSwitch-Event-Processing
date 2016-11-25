ovs-vsctl del-br br0
ip netns del ns1
ip netns del ns2
ip link del dev ovs-tap1
ip link del dev ovs-tap2

