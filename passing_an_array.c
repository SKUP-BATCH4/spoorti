#include<stdio.h>
int* display(int*);
int main()
{
    int *p;
    int a;
    scanf("%d",&a);
    p=display(&a);
    printf("%d",*p);
}

int* display(int *a)
{
   //printf("%d\n",*a);
    int i,fact=1;
    for(i=1;i<=*a;i++)
    {
        fact=fact*i;
    }
    int *k=&fact;
    return k;
}

