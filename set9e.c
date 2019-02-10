#include <stdio.h>
int main()
{
    char s[30];
    int i,t=0,j;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i%2==0)
        {
            printf("%c",s[i]);
        }
    }
    printf(" ");
    for(i=0;s[i]!='\0';i++)
    {
       if(i%2!=0)
       {
           printf("%c",s[i]);
       }
    }
    return 0;
}
