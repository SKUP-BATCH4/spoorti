#include<stdio.h>
union nnn
{
    int a;
    float b;
    char c;
};
void main()
{
    union nnn k;
    k.a=10;
     // printf("%d\n",k.a);
    k.b=3.33;
    k.c='i';
    //printf("%f\n",k.b);
    printf("%c",k.c);
}

