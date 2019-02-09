#include <stdio.h>
int main()
{
    char s[50];
    int i,t;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='0' || s[i]=='1')
        {
            t=1;
        }
        else
        {
            t=2;
        }
    }
    if(t==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
