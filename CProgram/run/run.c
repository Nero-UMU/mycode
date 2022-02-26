#include <stdio.h>
#include <stdlib.h>

int year = 2000;
int month = 1;
int day = 1;
int week = 6;

int isLeap()
{
    if(year == 2000 || year == 2004 || year == 2008 || year == 2012 || year == 2016 || year == 2020)
    {
        return 1;
    }
    else return 0;
}

int dayAdd()
{
    day++;
    week++;
    week = week == 8 ? 1 : week;
    if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if(day == 32)
        {
            month++;
            day = 1;
        }
        if(month == 13)
        {
            year++;
            month = 1;
        }
    }
    if(month == 4 || month == 6 || month == 9 || month == 11)
    {
        if(day == 31)
        {
            month++;
            day = 1;
        }
    }
    if(month == 2)
    {
        if(isLeap())
        {
            if(day == 30)
            {
                month++;
                day = 1;
            }
        }
        else
        {
            if(day == 29)
            {
                month++;
                day = 1;
            }
        }
    }
    return 0;
}

int dayRun()
{
    if(week == 1 || day == 1)
    {
        return 2;
    }
    else
    {
        return 1;
    }
}

int main(int argc, char *argv[])
{
    int run = 0;
    while(!(year == 2020 && month == 10 && day == 1))
    {
        run += dayRun();
        dayAdd();
    }
    run += dayRun();
    printf("%d\n", run);
    return 0;
}