#include<stdio.h>
char *rev(char c[]);
 int main()
 {
     char c[20];
     printf("Enter the string :");
     scanf("%s",c);
     char *p=rev(c);
     printf("%s",p);


 }
 char *rev(char c[])
 {
     char *p=strrev(c);
     return p;
 }
