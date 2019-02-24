#include <stdio.h>
int main()
{
    char s[200],s1[200];
    int i,flag,n,n1;
    scanf("%s %s",s,s1);
    n=strlen(s);
    n1=strlen(s1);
    if(n==n1)
    {
    for(i=0;i<n;i++)
      {
          
          if(s[i]==s1[i])
          {
              flag=0;
          }
          
          else
          {
              flag=1;
          }
          
          
      }
    
    if(flag==0)
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
