#include<stdio.h>
#include<stdlib.h>
 int main()
 {
     FILE *fp;
     char ch[100];
     fp=fopen("C:/Users/lenovo/Documents/Example.txt","r");
     if(fp==NULL)
        printf("Error");
     else
     {
         while(!feof(fp))
         {
             fgets(ch,100,fp);
             printf("%s",ch);

         }
     }
     fclose(fp);
 }
