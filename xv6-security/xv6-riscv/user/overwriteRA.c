#include "kernel/types.h"
#include "user/user.h"

int main()
{
    unsigned char authentication[] = {
        'p', 'a', 's', 's', 'w', 'o', 'r', 'd', '\n'
    };

    char deposit[] =
        "100\n"
        "John Smith\n"
        "87654321\n"
        "123456\n"
        "Y\n";

    write(1, authentication, sizeof(authentication));
    write(1, deposit, sizeof(deposit) - 1);

    exit(0);
}
