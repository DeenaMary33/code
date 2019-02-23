#include <stdio.h>
int main()
{
    char s[100],s1[100];
    int i,j,t=0;
    scanf("%s %s",s,s1);
    for(i=0;s[i]!='\0';i++)
    {   
        for(j=0;s1[j]!='\0';j++)
        {
            if(s[i]==s1[j])
            {
                t=1;
                break;
            }
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
