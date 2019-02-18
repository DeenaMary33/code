#include <stdio.h>
int main()
{
    char s[20];
    int i;
    scanf("%s",s);
    
    for(i=0;s[i]!='\0';i++)
    {
        if(s[i]>='A' && s[i]<='W')
        {
            s[i]=s[i]+3;
         
        }
        if(s[i]=='X')
         
        {
            s[i]='A';
        }
        if(s[i]=='Y') 
        {
            s[i]='B';
        }
        if(s[i]=='Z')
        {
            s[i]='C';
        }
    }
    printf("%s",s);

    return 0;
}
