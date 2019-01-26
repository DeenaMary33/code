#include <stdio.h>
int main()
{
    char ch[100];
    int c=0,i,n;
    scanf("%[^\n]s",ch);
    n=strlen(ch);
    for(i=0;i<n;i++)
    {
        if(ch[i]!=' ')
        {
            c++;
        }
    }
    printf("%d",c);
    return 0;
}
