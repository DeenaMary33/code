#include <stdio.h>
int main()
{
    char str[10000];
    int i,j,n,flag=0;
    scanf("%d",&n);
    for(i=1;i<n;i++)
    {
        scanf("%s\n",str);
    }
    for(i=1;i<n;i++)
    {
        for(j=0;str[j]!='\0';j++)
        {
        if(str[j]=='a' || str[j]=='e' || str[j]=='i' ||str[j]=='o' || str[j]=='u'|| str[j]=='A'|| str[j]=='E'|| str[j]=='I'|| str[j]=='O'|| str[j]=='U')
        {
            flag=1;
            break;
        }
        }
        if(flag==0)
        {
            break;
        }
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
