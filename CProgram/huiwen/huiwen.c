#include <stdio.h>
#include <stdlib.h>

int check_ab(int date)
{
  int num[8] = {0};
  for (int i= 0; i < 8; i++)
  {
    num[i] = date % 10;
    date /= 10;
  }
  if(num[0] == num[2] && num[0] == num[5] && num[0] == num[7])
  {
    if(num[1] == num[3] && num[1] == num[4] && num[1] == num[6])
    {
      return 1;
    }
    else return 0;
  }
  else return 0;
}

int check_h(int date)
{
  int num[8] = {0};
  for (int i= 0; i < 8; i++)
  {
    num[i] = date % 10;
    date /= 10;
  }
  if (num[7] == num[0])
  {
    if(num[6] == num[1])
    {
      if(num[5] == num[2])
      {
        if(num[4] == num[3])
        {
          return 1;
        }
        else return 0;
      }
      else return 0;
    }
    else return 0;
  }
  else return 0;
}

int main(int argc, char *argv[])
{
  int date = 0;
  scanf("%d", &date);
  while(date >= 10000101 && date <= 89991231)
  {
    if(check_h(date))
    {
      printf("%d\n", date);
      break;
    }
    date++;
  }
  date++;
  while(date >= 10000101 && date <= 89991231)
  {
    if(check_ab(date))
    {
      printf("%d\n", date);
      break;
    }
    date++;
  }
  return 0;
}
