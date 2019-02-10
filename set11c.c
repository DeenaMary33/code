#include <stdio.h>
int main()
{
    char s[50];
    int i;
    scanf("%[^\n]s",s);
    for(i=0;s[i]!='\0';i++)
    {
        if(i==0)
        {
            if(s[i]>='a' && s[i]<='z')
            {
            s[i]=s[i]-32;
            }
        }
        if(s[i]==' ')
        {
            if(s[i+1]>='a' && s[i+1]<='z')
            {
            s[i+1]=s[i+1]-32;
            }
        }
    }
   printf("%s",s);
    return 0;
}
