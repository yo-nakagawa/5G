#ホスト追加
ip netns add host1
ip netns add host2

ip link add veth0 type veth peer name veth-gw
ip link add veth1 type veth peer name veth2

ip link set veth-gw netns host1
ip link set veth1 netns host1
ip link set veth2 netns host2

ip netns exec host1 ip addr add 192.168.10.4/24 dev veth-gw
ip netns exec host1 ip addr add 192.168.10.3/24 dev veth1
ip netns exec host2 ip addr add 192.168.10.2/24 dev veth2
ip addr add 192.168.10.1/24 dev veth0

ip netns exec host1 ip link set veth-gw up
ip netns exec host1 ip link set veth1 up
ip netns exec host2 ip link set veth2 up

ip netns exec host1 ip link set lo up
ip netns exec host2 ip link set lo up

ip link set veth0 up
#goシンボリック形成
# ip netns exec host1 export PATH=$PATH:/usr/local/go/bin
# ip netns exec host2 export PATH=$PATH:/usr/local/go/bin
# ip netns exec host3 export PATH=$PATH:/usr/local/go/bin
#DNに出るための設定
#host1上
ip netns exec host1 sysctl -w net.ipv4.ip_forward=1
ip netns exec host1 iptables -t nat -A POSTROUTING -o veth-gw -j MASQUERADE
ip netns exec host1 ip route add default via 192.168.10.1
#Windows上
sysctl -w net.ipv4.ip_forward=1
iptables -t nat -A POSTROUTING -o wlx984827de7dc8 -j MASQUERADE
ip netns exec host1 iptables -A FORWARD -p tcp -m tcp --tcp-flags SYN,RST SYN -j TCPMSS --set-mss 1400
systemctl stop ufw