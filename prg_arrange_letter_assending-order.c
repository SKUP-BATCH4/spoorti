#include<stdio.h>
int main()
{

    char a[10];
    int i,j,min;
    printf("Enter the string :");
    scanf("%s",a);
    //min=a[0];
    for(i=0;i<a[i]-1;i++)
    {
        for(j=i+1;j<a[j];j++)
        {
       if(a[i]>a[j])
       {
           min=a[i];
           a[i]=a[j];
           a[j]=min;
       }
    }
    }
    printf("%s",a);
}
