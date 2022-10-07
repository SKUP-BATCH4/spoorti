#include<stdio.h>
#include<stdbool.h>
bool prime(int );

int main()
{
    int n,i;
    scanf("%d",&n);
    printf("%d",prime(n));
    }

bool prime(int n)
{
    int i,count=0;
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
          count++;
        }
    }
    if(count==2)
    {
       return true;
    }
    else
 return false;


}
