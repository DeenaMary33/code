#include <stdio.h>
#include<string.h>
int main()
{
    char s[20];
    int c=0,c1=0,n,i;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]=='(')
        {
            c++;
        }
        else if(s[i]==')')
        {
            c1++;
        }
    }
    if(c==c1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
