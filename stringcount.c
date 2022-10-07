#include<stdio.h>
int main()
{
    char a[10];
    int i,count=0;
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {

           if(!((a[i]>='a'&&a[i]<='z')||(a[i]>='A'&&a[i]<='Z')||(a[i]>='0'&&a[i]<='9')))
           {

                 count++;

                 printf("%c", a[i]);


           }
           else
           continue;



       }
        printf("%d\n", count);
        //else printf("%s",a[i]);
}
