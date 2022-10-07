#include<stdio.h>
int main()
{
//    int x;
//    scanf("%d",&x);
//    (x%4==0)&&(x%400==0)||(x%100!=0)?printf("leap"):printf("not leap");

int age,wg;
char phno[10];
char c[20];
printf("enter you name:");
scanf("%s",&c);

printf("enter you age:");
scanf("%d",&age);
printf("enter you wg:");
scanf("%d",&wg);
printf("enter you phno:");
scanf("%s",&phno);
printf("--------PERSONAL DETAILS------------\n");
printf("%s\n",c);
printf("The age is: %d\n The phno is: %s\n The wg is: %d",age,phno,wg);
printf("******* THANK YOY**********");
}
