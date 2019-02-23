#include <stdio.h>
int main()
{
    char s[100],k;
    int i,n;
    scanf("%s %c",s,&k);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
       if(s[i]==k)
       {
           printf("%d",i+1);
           break;
       }
    }

    return 0;
}
