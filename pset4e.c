#include <stdio.h>
int main()
{
    char s[1000];
    int i,j,c=0,t=0;
    gets(s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;i<c;i++)
    {   t=0;
        for(j=i+1;j<=c;j++)
        {
            if(s[i]==s[j])
            {
                t=1;
                s[j]='$';
            }
            
        }
        if(t==1)
        {
            s[i]='$';
        }
    }
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!='$')
        {
            printf("%c ",s[i]);
        }
    }

    return 0;
}
