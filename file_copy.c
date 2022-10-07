#include<stdio.h>
int main()
{
    FILE *fp=NULL;
    FILE *p;
    fp=fopen("C:/Users/lenovo/Documents/first.txt","r");
    p=fopen("C:/Users/lenovo/Documents/copyhi.txt","a
            ");
    fp=fopen("C:/Users/lenovo/Documents/first.txt","w");
    if(fp!=NULL)
    {

        char ch[50];
        while(!feof(fp))
              {
                  fgets(ch,100,fp);
                  fputs(ch,p);
              }
    }
     //remove("hi.txt");

    fclose(fp);
    fclose(p);
}
