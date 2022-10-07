#include<stdio.h>
char *printing_without_x();
int main()
{
 printf("%s",printing_without_x());
}
char *printing_without_x()
{
    static char a[10];
    int i;
    static char j[10];
    printf("Enter the string:");
    scanf("%s",a);
  while(a[i]!='\0')
  {
    if(a[0]=='x')
    {
        for(i=0;a[i]!='\0';i++)
       {
           j[1] = printf("%c",a[i+1]);
        }
    }
    else
    {
        return a;
    }
}
return j;
}
