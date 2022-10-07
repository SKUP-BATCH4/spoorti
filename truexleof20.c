#include<stdio.h>
#include<stdbool.h>
bool number(int);
int main()
{

int n;
scanf("%d",&n);
printf("%d",number(n));
number(n);
}
bool number(int n)
{
    int number;

    if(n%20==18||n%20==19)
   return 1;
    else
  return 0;

}

