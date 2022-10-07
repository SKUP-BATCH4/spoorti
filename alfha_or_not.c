#include<stdio.h>
int main()
{
    char x;
    printf("Enter the character:");
    scanf("%c",&x);
   // printf("%d",x);
    (((x<=91)&&(x>=65))||((x>=97)&&(x<=123)))?printf("character"):printf("Not char");
}
