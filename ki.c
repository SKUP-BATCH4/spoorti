#include<stdio.h>
char * reverse();
int main()

{
    int n;
    scanf("%d",&n);
    char a[n];
    //scanf("%s",&a);
    int i;
   for(i=0;a[i]!='\0';i++)
   {
       scanf("%s",&a[i]);    }

    for(a[i]!='\0';i>=0;i--)
    {
        printf("%c",a[i]);
    }
}
