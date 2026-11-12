#include "kernel/types.h"
#include "user/user.h"

int main()
{
    char buffer[18];

    buffer[0] = '\0';
    for (int i = 1; i <= 15; ++i) {
        buffer[i] = 'A';
    }
    buffer[16] = '\0';
    buffer[17] = '\n';
    write(1, buffer, 18);
    write(1, "600\n", 4); 
    write(1, "Jane Doe\n", 9);
    write(1, "111111\n", 7);
    write(1, "99999999\n", 9);
    write(1, "Y\n", 2);


}