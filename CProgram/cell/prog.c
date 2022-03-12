#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int x = 10, y = 90; 
    for(int i = 1;i <= 120; i++)   // 120个半分钟
    {
       if (!(i % 6))
        {
            x *= 2;
        }
        if (!(i % 4))
        {
            y *= 2;
        }
        if (i % 2)
        {
            y -= x;
        }
    }
    printf("%d\n", y);
    return 0;
}