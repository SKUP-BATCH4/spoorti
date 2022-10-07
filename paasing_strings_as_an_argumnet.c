#include<stdio.h>
char string_length(char[],char[]);
char string_change(char str1[],char str2[]);
int main()
{
    char str1[50],str2[50];
    printf("Enter the str1 :");
    scanf("%s",str1);
    printf("Enter the str2 :");
    scanf("%s",str2);
    string_length(str1,str2);
    string_change(str1,str2);
}
char string_length(char str1[],char str2[])
{
    int i,count=0,flag=0;
    for(i=0;str1[i]!='\0';i++)
    {
        count++;
    }
        for(i=0;str2[i]!='\0';i++)
    {
        flag++;
    }
    printf("The length of str1 is :%d\n The length of str2 is :%d\n",count,flag);
}
char string_change(char str1[],char str2[])
{
    int i;
    for(i=0;str1[i]!='\0';i++)
    {
        if(isupper(str1[i]))
        {
            str1[i]=tolower(str1[i]);
        }
        else if(islower(str1[i]))
        {
            str1[i]=toupper(str1[i]);
        }
    }
    printf("%s",str1);
}
