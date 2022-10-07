#include<stdio.h>
int main()
{
    int n;
    printf("enter the no :");
    scanf("%d",&n);
    int temp=n;
    int x=sum(n);
    if(temp==x)

    {
        printf("strong no");
    }
    else
    {
        printf("NOT STRONG");
    }
}

int sum(int n)
{
    int summ=0;
    while(n>0)
    {
      int y=fact(n);
      summ=summ+y;
      n=n/10;
    }
    return summ;
}

int fact(int n)
{
    int i,r,fact;
    while(n>0)
    {
        r=n%10;
        fact=1;
        for(i=r;i>0;i--)
        {
            fact=fact*i;
        }
        return fact;
}
}
