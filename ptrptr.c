#include<stdio.h>
int main()
{
    int a=10;

    int* ptr=&a;
   printf("Value of a:%d\n%x\n",a,ptr);
   printf("Address of a:%x\n%d\n",&a,*ptr);
}

