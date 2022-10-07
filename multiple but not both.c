#include<stdio.h>
main()
{
    int a;
    scanf("%d",&a);
    if ((a%3==0||a%5==0)||(a%3==0&&a%5==0)
        printf("true");
        else printf("false");
}
