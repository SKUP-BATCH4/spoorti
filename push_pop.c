#include<stdio.h>
int stack[100] ,top=-1;
int i,x,ele;
int main()
{
    printf("Enter how many values you want to enter:");
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
    printf("Enter the %d th ele",i,ele);
    scanf("%d",&ele);
    top++;
    stack[top]=x;
    }
    while(!stack[top].isempty())
    {
    printf("%d",stack[top]);
    stack[top].pop();
    }
}
