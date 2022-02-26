#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, c, d;
    a = b = c = 1;
    d = 0;
    for(int i = 4; i <= 20190324; i++)
    {
        d = (a + b + c) % 10000;
        a = b;
        b = c;
        c = d;
    }
    printf("%d\n", d);
    return 0;
}