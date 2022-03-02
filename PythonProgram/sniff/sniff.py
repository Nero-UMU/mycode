import socket
import struct
import binascii

s = socket.socket(socket.AF_PACKET, socket.SOCK_RAW, socket.htons(0x0800))
for num in range(100):
    data = s.recvfrom(1024)
    print('\nThe number is ', num)
    packet = data[0]
    frame_header_b = packet[0:14]
    frame_header_s = struct.unpack("!6s6s2s", frame_header_b)
    sources_mac_addr = binascii.hexlify(frame_header_s[0])
    dest_mac_addr = binascii.hexlify(frame_header_s[1])
    proto_type = binascii.hexlify(frame_header_s[2])
    print('source mac is ', sources_mac_addr)
    print('destination mac is', dest_mac_addr)
    print('protocol type is ', proto_type)
    ip_header_b = packet[14:34]
    ip_header_s = struct.unpack("!12s4s4s", ip_header_b)
    print("protocol is ", ip_header_s[0][9:10])
    print("source ip address is ", socket.inet_ntoa(ip_header_s[1]))
    print("destination ip address is ", socket.inet_ntoa(ip_header_s[2]))
s.close
