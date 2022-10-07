#include<stdio.h>
main()
{
    int a=3;float b=3.3; char n='n';
    void* vp=&a;
    void* np=&b;
    void* kp=&n;
    printf("%d\n",vp);
    printf("%c\n%d\n%f",*(char*)kp,*(int*)vp,*(float*)np);

}
