#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    int word[3];
    int year = 2019;
    for(int i = 0;i < 3; i++)
    {
        word[i] = year % 26;
        year /= 26;
    }
    for(int i = 2; i >= 0;i--)
    {
        printf("%c", word[i] + 'A' - 1);
    }
    printf("\n");
    return 0;
}