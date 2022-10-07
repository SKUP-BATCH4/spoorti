#include<stdio.h>
#include<math.h>
float  sum(float ,float ,float );

int main()
{
    FILE*fp=NULL;
    fp=fopen("C:/Users/lenovo/brigosha/yoo.txt","w");


    float a, b,c;
     printf("enter");
   scanf("%f %f %f",&a,&b,&c);

  fprintf(fp,"%.1f ",sum(a,b,c));
     fclose(fp);


}
float  sum(float a,float b,float c)
{

    float x=round(a);
    float y=round(b);
    float z=round(c);
    printf("%.1f %.1f %.1f",a,b,c);
    float s=x+y+z;
    return s;
}

