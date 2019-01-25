#include <stdio.h>

int main()
{
    char a[10],b[10];
    int i,s=0,s1=0,c=0,c1=0;
    scanf("%s",a);
    scanf("%s",b);
    for(i=0;a[i]!='\0';i++)
    {
        s++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        s1++;
    }
    if(s==s1)
    {
    for(i=0;i<s;i++)
    {
            if(a[i]==b[i])
            {
                c++;
            }
            else
            {
                c1++;
            }    
    } 
    if(c1==1)
    {
        printf("yes");
        
    }
    else
    {
        printf("no");
    }
    }
    else
    {
        printf("no");
    }
    return 0;
}
