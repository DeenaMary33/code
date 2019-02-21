#include <stdio.h>
int main()
{
    char s1[100],s2[100];
    int k,c=0,i;
    scanf("%s %s %d",s1,s2,&k);
    for(i=0;s1[i]!='\0';i++)
    {
        for(i=0;s2[i]!='\0';i++)
        {
            if(s1[i]!=s2[i])
            {
                c++;
            }
        }
    }
    if(c==k)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
