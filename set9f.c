#include <stdio.h>
int main()
{
    char s[30];
    int i,t=0;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]==s[i+1])
        {
            t=1;
            break;
        }
    }
    if(t==0)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
        
    }

    return 0;
}
