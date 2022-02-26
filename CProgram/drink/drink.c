#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int n, sum;
    scanf("%d", &n);
    sum = n;
    while(n > 2)
    {
        sum += n / 3;
        n = n / 3 + n % 3;
    }
    printf("%d\n", sum);
    return 0;
}