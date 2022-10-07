#include<stdio.h>
int main()
{

    int marks;
    printf("enter the number:");
    scanf("%d",&marks);

    switch(marks/10)
    {
    case 10: printf("marks a");
    break;
           case 9: printf("marks b");
           break;
           case 8: printf("marks c");
           break;
           case 7: printf("marks d");
           break;


    }
}
