#include<stdio.h>
#include<string.h>
int main()
{

    char a[20];
    printf("enter string:");
    scanf("%s",&a);
    int i=0;
    while(a[i]!='\0')
    {
     if(((a[i]>='a')&&(a[i]<='z'))||((a[i]>96)&&(a[i]<123)))
        a[i]-=32;
     i++;
    }
     printf("uppercasr:%s",a);
}
