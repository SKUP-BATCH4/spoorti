#include<stdio.h>
int si1(int p,int t,int r);
int si2();
void si3(int p,int t,int r);
void si4();

int main()
{
    int p,t,r;
    scanf("%d%d%d",&p,&t,&r);
    printf("%d\n",si1(p,t,r));
    printf("%d\n",si2());
     si3(p,t,r);
     si4();
}

int si1(int p, int t,int r)
{
    int s1=(p*t*r)/100;
    return s1;
}

int si2()
{
    int p=80, t=2, r=5,s2;
    s2=(p*t*r)/100;
    return s2;
}
void si3(int p, int t,int r)
{
    int si3=(p*t*r)/100;
    printf("%d\n",si3);

}
void si4()
{
    int p=80, t=2, r=5,s4;
    s4=(p*t*r)/100;
     printf("%d\n",s4);

}


