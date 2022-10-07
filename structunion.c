#include<stdio.h>
struct abc
{
    int d;
    float e;
};
union xyz
{
    int f;
    float g;
};
void main()
{
    struct abc v={10,12.5};
    printf("%d\n%f\n",v.d,v.e);
    union xyz k;
    k.f=33;
    k.g=33.3;
    printf("%d\n%f",k.f,k.g);
    printf("\n%d\n%d",sizeof(v),sizeof(k));
}
