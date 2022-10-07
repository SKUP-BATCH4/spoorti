
#include<stdio.h>
main()
{
char name[10], fathername[10], emailid[20];
int empid[10];
gets(name);
puts(name);
gets(fathername);
puts(fathername);
gets(emailid);
puts(emailid);
scanf("%s%s%s%d",name,fathername,emailid,&empid);
printf("%s\n%s\n%s\n%d");


}
