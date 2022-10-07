//srea and circ of circle
#include<stdio.h>
#define pi 3.14
float area(float r);
float circumference(float r);
int main()
{
float r;
scanf("%f",&r);
area(r);
circumference(r);
}

float area(float r)
    {
float area=pi*r*r;
 printf("%f\n",area);
return area;

    }
float circumference(float r)
{
   float circumference=2*pi*r;
    printf("%f\n",circumference);
return circumference;
}
