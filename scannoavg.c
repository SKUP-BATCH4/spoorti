#include<stdio.h>
main()
{
    int i,n,sum=0,z;
    int a[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
    {

        sum=sum+a[i];
    }
z=sum/5;
 printf("%d\n",z);
}


