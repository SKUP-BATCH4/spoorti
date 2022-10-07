#include<stdio.h>
struct abc{
   char f;
   int a;
   char b;
   int c;
   char d;
    }s;
int main()
{
    struct abc s;
    printf("%d",sizeof(s));
}
