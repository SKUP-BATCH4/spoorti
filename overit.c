#include<stdio.h>
int overit(int * ,int*);
int main()


{
    int a,b;
    printf("enter");
    scanf("%d %d",&a,&b);
    printf("%d ",overit(&a,&b));
    }

int overit(int *a,int*b)
{

    if(*a<=21&&*b<=21)
    {
      int x=21-*a;
      int y=21-*b;
      if(x>y)
        return *b;
      else
        return *a;
    }

}
