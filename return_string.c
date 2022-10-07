#include<stdio.h>
char* string();
int main()
{
    char *str;
    str=string();
    printf("%s\n-",str);
    str[0]='G';
    printf("%s",str);

}
char* string()
{

   static char str[]="bhavana";
    //scanf("%s",str);
    return str;
}



//#include<stdio.h>
//int main()
//{
//    printf("%s",display());
//}
//int display()
//{
//    return "bhavana";
//}
