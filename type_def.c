#include<stdio.h>
int main()
{
    typedef char spoorti;
    spoorti a[20]="spoortivh";
    printf("%d\n",sizeof(spoorti));
    printf("%s\n",a);
//printf("%d\n",sizeof(void));
//printf("%d\n",sizeof(float));
//printf("%d\n",sizeof(char));
//printf("%d\n",sizeof(double));
//printf("%d\n",sizeof(signed));
//printf("%d\n",sizeof(unsigned));
//printf("%d\n",sizeof(long signed int));
//printf("%d\n",sizeof(long unsigned int));
//printf("%d\n",sizeof(short signed int));
//printf("%d\n",sizeof(short unsigned int));

     long unsigned int s=764;
     //a=3576;
     printf("%lu\n",s);

     long int m=787885865;
     printf("%ld\n",m);

//     long char o[20]="uii";
//     printf("%s",o);

//     printf("%d",sizeof(long double));
//     printf("%d",sizeof(float));

double x=7398952467567568475683475683745687468458.976948534;
printf("%lf",x);

//    char c;
//    c=getchar();
//    putchar(c);
//
//    printf("\n");
//
//    char d[10]="spoo";
//    puts(d);
//
//    return 0;

}
