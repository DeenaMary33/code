#include <stdio.h>

int main()
{
    char s[200];
    int i,t=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z'))
        {
            t=1;
        }
        
    }
    if(t==1)
    {
        printf("no");
        
    }
    else
    {
        printf("yes");
    }

    return 0;
}
