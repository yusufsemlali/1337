ifconfig -a | grep -E 'ether ' | awk '{print $2}'
