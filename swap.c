        #include<stdio.h>
int main()
{
    int a=10;
    int b=20;
    a=a^b;
    b=a^b;
    a=a^b;
    printf("%d\n",a);
    printf("%d\n",b);
    printf("\n");


    a=a*b;
    b=a/b;
    a=a/b;
    printf("%d\n",a);
    printf("%d\n",b);

    printf("%d",a++);
    printf("%d",a);

//    int x=110;
//    int y=120,temp;
//    temp=x;
//    x=y;
//    y=temp;
//    printf("%d\n",x);
//    printf("%d\n",y);

}
