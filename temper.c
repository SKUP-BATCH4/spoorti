#include<stdio.h>
int main()
{

    float cel,kel,fahren;
    printf("enter temperature in cel:");
    scanf("%f",&cel);
    kel=cel+273.15;
    fahren=(cel*9/5)+32;
    printf("%.2fC = %.2fF = %.2f",cel,fahren,kel);

}
