#include <stdio.h>
#include <stdlib.h>

int check(int age)
{
    int Tri = age * age * age;
    int Four = age * Tri;
    int num[10];
    int sum;
    if(Tri < 1000 || Tri > 10000)
    {
        return 0;
    }
    if(Four < 100000 || Four > 1000000)
    {
        return 0;
    }
    return 1;
}
    

int main(int argc, char *argv[])
{
    int age = 0;
    for (age = 0; age < 100; age++)
    {
        if(check(age))
        {
            printf("%d\n", age);
            break;
        }
    }
    return 0;
}