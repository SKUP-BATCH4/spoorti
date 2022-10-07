#include<stdio.h>
int main()
{
    int a=10;
    int* ptr=&a;
    int ** ptr1=&ptr;
      printf("%d\n%d\n%d\n",a,*ptr,*ptr1);
     printf("%x\n%x\n%x\n",a,ptr,ptr1 );
}
