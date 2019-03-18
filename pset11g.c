#include <stdio.h>
int main()
{
    char s[10000],x[1000],s1[1000];
    int i,j,k=0,a=0,l=0,n=0,c=0;
    scanf("%[^\n]",s);
    scanf("%s",x);
    c=strlen(x);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            s1[k]=s[i];
            k++;
        }
          if(s[i]==' ')
          {
              a++;
              for(j=0;j<k;j++)
              {
              if(s1[k]==x[l])
              {
                n++;
                l++;
              }
              }
              for(j=0;j<k;j++)
              {
                  s1[j]='\0';
                  n=0;
                  l=0;
              }
          }

      }
      n=0;
      l=0;
      for(j=0;j<k;j++)
      {
          if(s1[j]==x[l])
          {
              n++;
              l++;
          }
      }
      if(c==n)
      {
        a++;   
      }
      printf("%d",a);
    return 0;
}
