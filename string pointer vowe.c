#include<stdio.h>
int main()
{
int i,count=0,sum=0;
    char a[10];
    char *ptr=&a;
   scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(*ptr=='a'||*ptr=='e'||*ptr=='i'||*ptr=='o'||*ptr=='u')
            {
                count++;
            }
    else
    {
         sum++;
    }
    ptr++;
}
printf("The vowels are: %d\n",count);
printf("The consonents are: %d\n",sum);

}
