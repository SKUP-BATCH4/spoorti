#include<stdio.h>
main()
{
    int i,n;
    printf("enter the size of array:");
    scanf("%d",&n);
    int a[n],b[i];
    for(i=0;i<3;i++)
    {
        printf("the value:");
        scanf("%d",&a[i]);
    }
    for(i=0;i<3;i++)
    {
        printf("%d\t\n",a[i]);
    }
    for(i=2;i>=0;i--)
    {
   b[2-i]=a[i];
   printf("%d\t",b[i]);
}
}
