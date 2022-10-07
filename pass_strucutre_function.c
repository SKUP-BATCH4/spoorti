#include<stdio.h>
struct std
{
    char a;
    int b;
    float c;

};
int main()
{
    struct std s;
    s.a='a';
    s.b=10;
    s.c=1.2;
    printing(s);
}
int printing(struct std s)
{
    printf("%d\n %.3f\n %c\n",s.b,s.c,s.a);

}
