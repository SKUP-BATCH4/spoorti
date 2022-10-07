#include<stdio.h>
#include<stdbool.h>
bool num(int n);
int main()
{



    int i,num1[4],n,x;

    for(i=0;i<4;i++)
    {
        scanf("%d",&num1[i]);
    }
    x=num1[0];
    num(x);
    printf("%d",num(x));
}



   bool num(int a)

{

        if(a==6)
        {
            return true;
        }
      else  return false;

}


