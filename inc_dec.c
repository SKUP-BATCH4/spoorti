#include<stdio.h>
int main()
{
//    float a=10.4;
//    ++a;
//    printf("Pre_increment\n");
//    printf("%f\n",a);
//
//    int b=01;
//    b++;
//    printf("post_increment\n");
//    printf("%f\n",b);

float d=2.5;
printf("post increment : %f\n",d++);
printf("pre increment : %f\n",++d);

printf("post decrement : %f\n",d--);
printf("pre decrement : %f\n",--d);

char c='z';
printf("post increment : %c\n",c++);
printf("pre increment : %c\n",++c);

printf("post decrement : %c\n",c--);
printf("pre decrement : %c\n",--c);

int x=20,y=40,z;
z=x++ - y-- + --x - ++y;
printf("%d\n",z);
printf("%d\n",x);
printf("%d\n ",y);

}
