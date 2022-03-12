#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x,y,z;
    y = 1;
    z = 0;
    for (x=1;x<=20;x++)
    {
        y += z;
        z += 4;
    }
    printf("%d", y);
    return 0;
}