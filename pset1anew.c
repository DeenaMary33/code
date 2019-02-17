#include <stdio.h>
int main()
{
    char s[20];
    int i,n=0;
    scanf("%s",s);
    n=strlen(s);
    for(i=n-1;i>=0;i--)
    {
       printf("%c",s[i]); 
    }

    return 0;
}
