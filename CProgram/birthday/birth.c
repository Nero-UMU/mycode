#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int year = 0, day = 0;
    int num = 0;
    for (year = 1900; year < 2012; year++)
    {
        for(day = 0; day < 31; day++)
        {
            num = year * 10000 + 600 + day;
            if(num % 2012 == 0 && num % 3 == 0 && num % 12 == 0)
            {
                printf("%d\n", num);
                return 0;
            }
        }
    }
    return 0;
}