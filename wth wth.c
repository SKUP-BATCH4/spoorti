#include<stdio.h>
int sum(int a,int b)
{
    int sum;
    sum=a+b;

printf("%d",sum);
return sum;
}
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);

sum(a,b);
}
