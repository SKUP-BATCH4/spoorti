#include<stdio.h>
int main()

{
    FILE*fp;
    char ch;
    int count=0;
    fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","r");
    ch=getc(fp);
    while(ch!= EOF)
    {
        if(ch=='\n')
        {
            count++;
        }
        ch=getc(fp);
    }

    fclose(fp);
    printf("%d ",count);
}
