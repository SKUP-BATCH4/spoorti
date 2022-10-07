#include<stdio.h>
swap(int * ,int * );
int main()
{
    int a,b;
    printf("Enter the two no:");
    scanf("%d%d",&a,&b);
    printf("%d %d\n",a,b);
    swap(&a,&b);
}
int swap(int *a,int *b)
{
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    printf("%d %d",*a,*b);
}
