#include<stdio.h>
struct abc{
    int a;
    char b;
    };
int main()
{
    struct abc v;
    scanf("%d %c",&v.a,&v.b);
    struct abc *ptr=&v;
printf("%d\n%c",(*ptr).a,(*ptr).b);
}

