
//#include <stdio.h>
//int main() {
//   register char x = 'S';
//   register int a = 10;
//   auto int b = 8;
//   printf("The value of register variable b : %c\n",x);
//   printf("The sum of auto and register variable : %d",(a+b));
//   return 0;
//}

#include<stdio.h>


int main()
{
    int i = 10;
   register  int* a = &i;
    printf("%d", *a);

    return 0;
}
