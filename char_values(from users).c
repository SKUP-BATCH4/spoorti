#include<stdio.h>
int main()
{
    char a;
    char b;
    printf("Enter the character:");
    scanf("%c", &a);
    printf("The entered characters is: %c\n",a);
    printf("Enter the character:");
    scanf("%c ",&b);
    printf("The entered characters is: %c",b);
}
