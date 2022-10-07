#include<stdio.h>
main()
{
    int a[]={3,5,6,7,-9};
    int *p=&a[1];
    //p+2=p+(n*sizeof(int));
    int *q=&a[3];
    //
printf("%d\n",*p);
printf("%d\n",*q);
   // printf("%d\n",p+(n*sizeof(int)));

printf("%d\n",p-q);
printf("%d\n",*p);
printf("%d\n",++*p);
printf("%d\n",*p++);
printf("%d\n",*p--);
printf("%d\n",--*p);





}
