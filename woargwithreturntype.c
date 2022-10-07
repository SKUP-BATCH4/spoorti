#include<stdio.h>
#include<stdbool.h>
bool func();
int main()
{


printf("%d",func());
}

bool func()
{
    int i,a[4],x;
     for(i=0;i<4;i++)
    {
        scanf("%d",&a[i]);
    }


    if(a[0]==6)
    {
         return true;

    }
        else return false;

}

