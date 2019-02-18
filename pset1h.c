#include <stdio.h>
void main()
{
    char s[20];
    int i;
    scanf("%[^\n]s",s);
    if(s[0]>='a' && s[0]<='z')
    {
        s[0]=s[0]-32;
    }
    for(i=1;s[i]!='\0';i++)
    {
        if(s[i]==' ')
        {
            if(s[i+1]>='a' && s[i+1]<='z')
            {
              s[i+1]=s[i+1]-32;
            }
        }
    }
    
    printf("%s",s);
}
