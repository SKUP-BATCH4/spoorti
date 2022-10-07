#include<stdio.h>
int main()
{
    float a=5.9,b=4.0,c=-6.0;
    printf("AND\n");
    printf("%d\n",((a>b)&&(b>c)));
    printf("%d\n",((a>b)&&(b<c)));
    printf("OR\n");
    printf("%d\n",((a<b)||(b>c)));
     printf("%d\n",((a>b)||(b>c)));
     printf("XOR\n");
     printf("%d\n",((a<b)^(b>c)));
     printf("%d\n",((a>b)^(b>c)));
     printf("\n");
    printf("%d\n",((a<b)||(b<c)));
     printf("%d\n",(a&&b));
    printf("%d\n",!(a||b));
}
