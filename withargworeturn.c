#include<stdio.h>
int main()
{

    int i,a[4],x;
    for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }
    x=a[0];
    func(x);

}

void func (int x)
{
    if(x==6)
    {
         printf("true");

    }
        else printf("false");

}
