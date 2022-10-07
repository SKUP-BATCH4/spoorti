#include<stdio.h>
#include<string.h>
main()
{
    char s1[10],s2[10];
    scanf("%s%s",s1,s2);
     printf("%d\n",strlen(s1));
      printf("%s\n",strcpy(s1,s2));
       printf("%d\n",strcmp(s1,s2));
        printf("%s",strcat(s1,s2));
        printf("\n");
         printf(strlwr(s1));
        printf("\n");
          printf(strupr(s1));
    printf("\n");
    printf(strrev(s1));
     printf("%s%s\n",strstr(s1,s2));
}
