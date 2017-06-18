##add the namespaces
ip netns add ns1
ip netns add ns2
# create the switch
ovs-vsctl add-br br0 -- set bridge br0 datapath_type=netdev

# PORT 1
# create a port pair
ip link add tap1 type veth peer name ovs-tap1
# attach one side to ovs
ovs-vsctl add-port br0 ovs-tap1 
# attach the other side to namespace
ip link set tap1 netns ns1
# set the ports to up
ip netns exec ns1 ip link set dev tap1 up
ip netns exec ns1 ip addr add 10.1.1.1/24 dev tap1
ip netns exec ns1 ip link set lo up
ip link set dev ovs-tap1 up
#
#### PORT 2
# create a port pair
ip link add tap2 type veth peer name ovs-tap2
# attach one side to ovs
ovs-vsctl add-port br0 ovs-tap2 
# attach the other side to namespace
ip link set tap2 netns ns2
# set the ports to up
ip netns exec ns2 ip link set dev tap2 up
ip netns exec ns2 ip addr add 10.1.1.2/24 dev tap2
ip netns exec ns2 ip link set lo up
ip link set dev ovs-tap2 up
#
