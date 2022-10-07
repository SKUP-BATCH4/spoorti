#include<stdio.h>
#include<math.h>
int main()
{
    FILE * fp=NULL;
    fp=fopen("C:/Users/lenovo/Documents/first.txt","r");
    char ch[500];
//    char c[20]="spoo";
//    int a=10;
//    float b=2.4;
//    int z=4;

    if(fp==NULL)
    {
        printf("Error");
    }
    else
    {
//    fputc('\n',fp);
    fgets(ch,500,fp);
    //printf("%s",ch);
while((ch=fgetc(fp))!=EOF)
{
        printf("%c",ch);
 }
//  fputc('\n',fp);
//    fputs(c,fp);

//    fprintf(fp,"\n Hello guys welcom to my page:...");
//
//    fprintf(fp,"\n The fee to go through our page is : %d %f",a,b);
//
//    fprintf(fp,"\n multiplication of a and b is : %f",a*b);
//
//    fprintf(fp,"\n The square root of %d : %d",z,pow((z,2));
//    fprintf(fp,"\n");
    fclose(fp);
    }

}
