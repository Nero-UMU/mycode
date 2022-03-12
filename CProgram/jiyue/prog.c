#include <stdio.h>
#include <stdlib.h>

int func(int a, int b)
{
    if(a % b == 0)
    {
        return b;
    }
    else return func(b, a % b);
}

int main(int argc, char *argv[])
{
    int sum = 0;
    for(int i = 1; i <= 2020; i++)
    {
        for(int j = 1; j <= 2020; j++)
        {
            if(func(i, j) == 1)
            {
                sum++;
            }
        }
    }
    printf("%d",sum);
    return 0;
}