#include<stdio.h>
int main()
{
    printf("Enter the size of the array:");
    int x;
    scanf("%d",&x);
    int a[x];
    for(int i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
    }
    avg(&a,x);
}
int avg(int *a,int x)
{
    int sum=0,i;
    for(i=0;i<x;i++)
    {
        sum=sum+a[i];
    }
    printf("The sum of %d digits is : %d",x,sum);
}
