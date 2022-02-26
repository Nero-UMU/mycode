#include <stdio.h>
#include <stdlib.h>

int main (int argc, char *argv[])
{
    int n, time;
    int max = -1, min = 101, tmp = 0;
    double ave = 0;
    scanf("%d", &n);
    time = n;
    while(time > 0)
    {
        scanf("%d", &tmp);
        max = tmp > max ? tmp : max;
        min = tmp < min ? tmp : min;
        ave += (double)tmp / (double)n;
        time--;
    }
    printf("%d\n", max);
    printf("%d\n", min);
    printf("%.2lf\n", ave);
    return 0;
}