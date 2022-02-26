#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, length;
    scanf("%d", &n);
    length = 1;
    if(n % 2 == 0)
    {
        while(n)
        {
            length *= 2;
            length += 1;
            n -= 2;
        }
    }
    else
    {
        while(n - 1)
        {
            length *= 2;
            length += 1;
            n -=2;
        }
        length *= 2;
    }
    printf("%d\n", length);
    return 0;
}