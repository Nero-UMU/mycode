#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int a, b, t;
    scanf("%d%d%d", &a, &b, &t);
    if(b + t > 59)
    {
        a += (b + t) / 60;
        b = (b + t) % 60;
    }
    printf("%d\n", a);
    printf("%d\n", b);
    return 0;
}