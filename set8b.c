#include <stdio.h>
int main()
{
    char ch[20];
    int i,t=0;
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a'|| ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        {
            t=1;
        }
    }
    if(t==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
