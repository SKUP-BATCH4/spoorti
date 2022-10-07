#include<stdio.h>
int main()
{

    FILE *f1=NULL;
     f1=fopen("C:/C programs vb/yoo.txt","r");
    FILE *f2=NULL;
    f2=("C:/C programs vb/yoo2.txt","w");
    char ch[79];
    while(!feof(f1))
    {

        fgets(ch,79,f1);
        fputs(ch,f2);
    }
    fclose(f1);
    fclose(f2);
}
