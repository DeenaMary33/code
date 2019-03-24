#include <stdio.h>
int main()
{
    char s[100000];
    int i,c,f=0;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]!=' ')
        {
            c++;
        }
    }
    for(i=2;i<c;i++)
    {
       if(c%i==0)
       {
           f=1;
           printf("no");
           break;
       }
    }
    if(f==0)
    {
        printf("yes");
    }

    return 0;
}
