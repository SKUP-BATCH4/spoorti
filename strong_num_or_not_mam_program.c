#include<stdio.h>

int main()
{
    tsum(145);
}
int tsum(int n)
{
  int last,sum=0,org=n;
  {
      while(n>0)
      {
          last=n%10;
          n=n/10;
          sum=sum+fact(last);
      }
      if(org==sum)
      {
          printf("strong no");
      }
      else
        {
         printf("not strong no\n");
        }
  }
}
  int fact(int num)
  {
      int fact=1,i;
      for(i=1;i<=num;i++)
      {
          fact=fact*i;
      }
      return fact;
  }


