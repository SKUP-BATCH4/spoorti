#include<stdio.h>
int main()
{
    int x;
    printf("Enter the number:");
    scanf("%d",&x);
    //(x>=10)?printf("greater then 10"):printf("less then 10");
    if(x>10)
    {
            printf("greater");
    }
    else if(x==10)
    {
            printf("equal");
    }
    else
    {
            printf("less");
    }
}
