#include<stdio.h>
main()
{
    int a=3,n=2;
    int *p=&a;
    //p+2=p+(n*sizeof(int));
    //int q=p+2;
    //
printf("%d\n",*p);
printf("%d\n",p);
    printf("%d\n",p+(n*sizeof(int)));
p=p+2;
printf("%d\n",p);


}


