#include<stdio.h>
char *printing_without_x();
int main()
{
    char a[20];
    gets(a);
    char *p=printing_without_x(a);
 printf("%s",p);
}
char *printing_without_x(char s[])
{
    int y;
    printf("Enter the index :");
    scanf("%d",&y);
   //if(s[0]=='x')
        return s+y;
  // else
       // return s
}
