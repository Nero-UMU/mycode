#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int numList[10] = {2021, 2021, 2021, 2021, 2021, 2021, 2021, 2021, 2021, 2021};
    int i = 1, x;
    while (1)
    {
        x = i;
        while(x)
        {
            if(numList[x % 10] != 0)
            {
                numList[x % 10]--;
                x /= 10;
            }
            else
            {
                printf("%d\n", i - 1);
                return 0;
            }
        }
        i++;
    }
    return 0;
}