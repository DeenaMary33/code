#include <stdio.h>

int main()
{
    int s1[2],s2[2],s3[2];
    int i,t=0;
    for(i=0;i<2;i++)
    {
        scanf("%d",&s1[i]);
    }
    for(i=0;i<2;i++)
    {
       scanf("%d",&s2[i]);
    }
    for(i=0;i<2;i++)
    {
        scanf("%d",&s3[i]);
    }
    for(i=0;i<2;i++)
    {
        if(s1[i]==s2[i] && s2[i]==s3[i])
        {
            t=1;
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
