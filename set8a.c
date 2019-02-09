#include <stdio.h>
int main()
{
    char s[20],s1[20],s2[20];
    int n,i,c=0;
    scanf("%s",s);
    n=strlen(s);
    for(i=0;i<n;i++)
    {
        if(s[i]==s[n-i-1])
        {
            c++;
        }
    }
    if(n==c)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
