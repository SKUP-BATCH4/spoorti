#include<stdio.h>
char * not_on_vacation(int , char[]);
char * vacation(int , char[]);
int main()
{
    int x;
    char vac[50];
    printf("Enter the week day u r on:\n 0. sunday\n 1. monday\n 2. Tuesday\n 3. Wednesday\n 4. Thrusday\n 5. Firday\n 6. saturday\n");
    scanf("\n%d",&x);
    printf("Tell us that are you on vacation or not(TRUE/FALSE):\n");
    scanf("%s",vac);
    if(vac=="FALSE")
    {
        printf("%s",not_on_vacation(x,*vac));
    }
    else
    {
        printf("%s",vacation(x,vac));
    }
}
char * not_on_vacation(int x, char vac[])
{
    switch(x)
        {
            case 0: return "10:00";
                    break;
            case 1: return "7:00";
                    break;
            case 2: return "7:00";
                    break;
            case 3: return "7:00";
                    break;
            case 4: return "7:00";
                    break;
            case 5: return "7:00";
                    break;
            case 6: return "10:00";
                    break;

        }
}
char * vacation(int x, char vac[])
{
    switch(x)
        {
            case 0: return "OFF";
                    break;
            case 1: return "10:00";
                    break;
            case 2: return "10:00";
                    break;
            case 3: return "10:00";
                    break;
            case 4: return "10:00";
                    break;
            case 5: return "10:00";
                    break;
            case 6: return "OFF";
                    break;
        }
}
