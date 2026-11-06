#include <stdio.h>

__attribute__((noinline))
int add(int a, int b)
{
    int result = a + b;
    return result;
}

int main()
{
    int x = 10;
    int y = 20;

    int answer = add(x, y);

    printf("Answer: %d\n", answer);

    return 0;
}