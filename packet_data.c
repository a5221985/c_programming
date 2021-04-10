#include <stdio.h>
#include <stdint.h>

typedef union Packet {
    uint32_t packetValue;
    
    struct {
        uint32_t crc		:2;
        uint32_t status		:1;
        uint32_t payload	:12;
        uint32_t bat		:3;
        uint32_t sensor		:3;
        uint32_t longAddr	:8;
        uint32_t shortAddr	:2;
        uint32_t addrMode	:1;
    } packetFields;
} Packet_t;

int main() {
    printf("Enter packet data in hex format: ");
    fflush(stdout);
    Packet_t packet;
    scanf("%X", &packet.packetValue);
    
    printf("The packet fields are: \n");
    printf("crc\t\t: 0x%X\n", packet.packetFields.crc);
    printf("status\t\t: 0x%X\n", packet.packetFields.status);
    printf("payload\t\t: 0x%X\n", packet.packetFields.payload);
    printf("bat\t\t: 0x%X\n", packet.packetFields.bat);
    printf("sensor\t\t: 0x%X\n", packet.packetFields.sensor);
    printf("longAddr\t: 0x%X\n", packet.packetFields.longAddr);
    printf("shortAddr\t: 0x%X\n", packet.packetFields.shortAddr);
    printf("addrMode\t: 0x%X\n", packet.packetFields.addrMode);

    return 0;
}
