#include <stdio.h>
#include<string.h>
int main()
{
    char s[200],ch;
    int i,j,c=1,max=1;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        for(j=i+1;s[j]!='\0';j++)
        {
            if(s[i]==s[j])
            {
                c=c+1;
              if(c>max)
              {
               max=c;
               ch=s[i];
              }
            }
        }
    }
    printf("%c",ch);

    return 0;
}
