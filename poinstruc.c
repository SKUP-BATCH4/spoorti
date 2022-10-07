#include<stdio.h>
struct std{
int tm;
float cgpa;
char grade;
float sgpa;

};
void main()
{
    struct std s[4];
    scanf("%d\n%f\n%c\n%f",&s[0].tm,&s[1].cgpa,&s[2].grade,&s[3].sgpa);
    printf("%d\n%f\n%c\n%f",s[0].tm,s[1].cgpa,s[2].grade,s[3].sgpa);
}
