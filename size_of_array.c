#include<stdio.h>
int main()
{
    int n,i,count=0;
    printf("Enter the value of n:");
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
        printf("enter the value");
        scanf("%d",&a[i]);
    }
//        for(i=0;i<n;i++)
//    {
       //count++;
               printf("%d\n",sizeof(a)/sizeof(a[0]));
 //   }
    //printf("The count size is : %d",count);
}
