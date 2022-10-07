#include<stdio.h>
int main()
{
    int k=10;
    printf("%d",sum(10));
}
int sum(int k)
{
    if(k>0)
        return k+sum(k-1);
    else return 0;
}
