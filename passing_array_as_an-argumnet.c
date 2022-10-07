#include<stdio.h>
int average(int[], int);
int main()
{
    int avg,a;
    int marks[5]={1,2,3,4,5};
    a=sizeof(marks)/sizeof(marks[0]);
    avg=average(marks,a);
    printf("%d\n",avg);
}
int average(int marks[],int a)
{
    int i=0,sum=0,avg1=0;
    for(i=0;i<a;i++)
    {
        sum=sum+marks[i];
        //3int avg1;

    }
    avg1=sum/a;
    return avg1;
}
