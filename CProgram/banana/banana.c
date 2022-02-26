#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int banana = 1, tmp = 0;
    while(1)
    {
        tmp = banana;
        if(banana % 5 == 1 && banana > 6)
        {
            tmp = (banana - 1) * 4 / 5;
            if(tmp % 5 == 2 && tmp > 7)
            {
                tmp = (tmp - 2) * 4 / 5;
                if(tmp % 5 == 3 && tmp > 8)
                {
                    tmp = (tmp - 3) * 4 / 5;
                    if(tmp % 5 == 4 && tmp > 9)
                    {
                        tmp = (tmp - 4) * 4 / 5;
                        if(tmp % 5 == 0 && tmp > 5)
                        {
                            break;
                        }
                    }
                }
            }
        }
        banana++;
    }
    printf("%d\n", banana);
    return 0;
}