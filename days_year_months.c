#include<stdio.h>
int main()
{
    float year,month,week,day,x;
    printf("The the total number of days:");
    scanf("%f",&x);
    year=x/365;
    month=x/30;
    week=x/7;
    printf("The year is: %f\n",year);
    printf("The moths is: %f\n",month);
    printf("The week is: %f\n",week);
}
