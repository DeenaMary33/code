#include <stdio.h>
int main()
{
    char s[20];
    int i,c=0,r;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i++)
    {
        c++;
    }
    r=c/2;
    if(c%2==0)
    {
        for(i=0;i<r;i++)
        {
        s[r]='*';
        s[r-1]='*';
        }  
    }
    else
    {   
    for(i=0;i<r;i++)
    { 
        s[r]='*';
    }
    }
    printf("%s",s);
    return 0;
}
