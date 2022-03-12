#include <stdio.h>
#include <stdlib.h>

int sort(int* list, int len)
{
    int temp;
    for(int i=0;i<len-1;i++)
    {
        if(list[i]>list[i+1])
        {
            temp = list[i];
            list[i] = list[i+1];
            list[i+1] = temp;
        }
    }
    return 0;
}

int main(int argc, char *argv[])
{
    int num, sum=0;
    scanf("%d", &num);
    int people[num];
    for(int i=0; i < num;i++)
    {
        scanf("%d", &people[i]);
    }
    sort(people, num);
    for(int i=1;i<num;i++)
    {
        sum += people[0]+people[i];
        people[0] += people[i];
    }    
    printf("%d\n", sum);
    return 0;
}
