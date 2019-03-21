#include <stdio.h>
int main()
{
    char s[50];
    int flag=0;
    scanf("%s",s);
    if(s[0]<'3'&& s[1]<'10' && s[2]=='/' && s[3]<'1' && s[4]<'10' && s[5]=='/' && s[6]<'10' && s[7]<'10' && s[8]<'10' && s[9]<'10')
    {
        flag=1;
    }
    else
    {
        flag=0;
    }
    if((s[0]=='3' && s[1]<'2')&&(s[3]=='1' && s[4]<'3'))
    {
        flag=1;
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
