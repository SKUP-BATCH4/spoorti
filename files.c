#include<stdio.h>
#include<math.h>
int main()
{
    FILE * fp=NULL;
    fp=fopen("C:/Users/lenovo/Documents/first2.txt","a");
    char ch;
     if(fp==NULL)
    {
        printf("Error");
        return 1;
    }
//    else
//    {
 printf("Read");
//    fgets(ch,50,fp);
//    printf("%s",ch);
while(1)
{
       ch=fgetc(fp);
       if(ch==EOF)
        break;
        else
        printf("%c",ch);
}
printf("close");
fclose(fp);
return 0;
}
