#include <stdio.h>
int main()
{
    char s[20],s1[20];
    int i,j,c=0,c1=0,l=0,l1=0,t=0,t1=0;
    scanf("%s %s",s,s1);
    c=strlen(s);
    c1=strlen(s1);
    if(c==c1)
    {
        for(i=0;i<c;i++)
        {
          for(j=i+1;j<c;j++)
          {
             if(s[i]==s[j])
            {
                l++;
            }
            if(s[i]!=s[j])
            {
                l1++;
            }
          }
        }
       for(i=0;i<c1;i++)
        {
          for(j=i+1;j<c1;j++)
          {
             if(s1[i]==s1[j])
            {
                t++;
            }
            if(s1[i]!=s1[j])
            {
                t1++;
            }
          }
        }
            
        if(l==t && l1==t1)
        {
            printf("yes");
        }
        else
        {
            printf("no");
        }
    }
    else
    {
        printf("no");
    }

    return 0;
}
