#include<stdio.h>
int main()
{
    char x='f',y='t';
    (x==y)?printf("x and y are equal\n"):printf("They are not equal\n");
    char m;
    m=(y==x)?y:x;
    printf("%c",m);
}
