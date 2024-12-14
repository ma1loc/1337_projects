#!/bin/bash

echo "hello guys!" | wall # brodcasting message to all in the server!!!!d
#
# Variables command:
#
Architecture=$(uname -a) # done
Physical_CPU=$(lscpu | grep -i "Socket(s)" | awk '{print $2}') # done
Virtual_CPU=$(lscpu | grep -i "CPU(s)" | awk '{print $2}') # check
Usage_Memory=$(free --mega | grep -i "mem" | awk '{print $3}') # done
Total_Memory=$(free --mega | grep -i "mem" | awk '{print $2}') # done

Per=$(echo "$Usage_Memory $Total_Memory" | awk '{printf "%.2f", ($1 / $2) * 100}')

IP_Addr=$(echo "IP $(hostname -I)")
MAC_Addr=$(ip link | grep -i ether | awk '{print $2}')
#
# excute the command:
#
echo "Architecture: ${Architecture}" # done
echo "CPU physical: ${Physical_CPU}" # done
echo "vCPU: ${Virtual_CPU}" # check
echo "Memory Usage: ${Usage_Memory}/${Total_Memory}MB (${Per}%)" # done


echo "Network: ${IP_Addr} (${MAC_Addr})"
