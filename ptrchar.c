#include<stdio.h>
void main()
{
    char a;
    int b;
    float c;
     char ** ptr=&a;
    int ** ptr1=&b;
    float ** ptr2=&c;
    char d='k';
//    char *ptr1=&c;+8`
//    char* ptr2=&d;
//    int *ptr3=&ptr1;
//    int * ptr=&ptr2;
    scanf("%c\n%d\n%f",&a,&b,&c);
//    printf("%c\n%c\n%x\n%x\n%x\n%x",c,d,ptr1,ptr2,ptr3,ptr);
//    char * ptr=&a;
//    int * ptr1=&b;
//    float * ptr2=&c;
    printf("Values of a,b,c:%c\n%d\n%f",*ptr,*ptr1,*ptr2);
printf("\nAddress of a,b,c:%x\n%x\n%x",ptr,ptr1,ptr2);

}
