#include <stdio.h>
#include <stdint.h>

struct Packet {
    uint8_t crc;
    uint8_t status;
    uint16_t payload;
    uint8_t bat;
    uint8_t sensor;
    uint8_t longAddr;
    uint8_t shortAddr;
    uint8_t addrMode;
};

int main() {
    struct Packet packet;

    printf("Enter packet data in hex format: ");
    fflush(stdout);
    uint32_t input = 0;
    scanf("%X", &input);

    packet.crc = (uint8_t) (input & 0x03);
    packet.status = (uint8_t) ((input & (0x01 << 2)) >> 2);
    packet.payload = (uint16_t) ((input & (0x0FFF << 3)) >> 3);
    packet.bat = (uint8_t) ((input & (0x07 << 15)) >> 15);
    packet.sensor = (uint8_t) ((input & (0x07 << 18)) >> 18);
    packet.longAddr = (uint8_t) ((input & (0x0FF << 21)) >> 21);
    packet.shortAddr = (uint8_t) ((input & (0x03 << 29)) >> 29);
    packet.addrMode = (uint8_t) ((input & (0x01 << 31)) >> 31);   

    printf("crc\t\t: 0x%hhX\n", packet.crc);
    printf("status\t\t: 0x%hhX\n", packet.status);
    printf("payload\t\t: 0x%hX\n", packet.payload);
    printf("bat\t\t: 0x%hhX\n", packet.bat);
    printf("sensor\t\t: 0x%hhX\n", packet.sensor);
    printf("longAddr\t: 0x%hhX\n", packet.longAddr);
    printf("shortAddr\t: 0x%hhX\n", packet.shortAddr);
    printf("addrMode\t: 0x%hhX\n", packet.addrMode);
 
    return 0;
}
