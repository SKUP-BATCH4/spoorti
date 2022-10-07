#include<stdio.h>
int main()
{
 int num1,num2;
 char dou[10],sum=0,x=0;
 printf("Enter the value of the dice-1:");
 scanf("%d",&num1);
 printf("Enter the value of the dice-1:");
 scanf("%d",&num2);
 printf("Let us know if it is double or no(TRUE/FALSE) :");
 scanf("%s",dou);
 sum=num1+num2;
  x=sum+1;
 printf("%d",x);
 if(dou=="TRUE")
 {
     if(num1==num2)
     {

         printf("%d",x);
     }
     else
    {
        printf("%d",sum);
    }
 }
 else
 {
        printf("%d",sum);
 }
 }


