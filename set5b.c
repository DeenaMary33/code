#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,c=0,c1=0;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    for(i=0;b[i]!='\0';i++)
    {
        c1++;
    }

    if(c==c1)
    {
        printf("%s",b);
    }
    else if(c>c1)
    {
        printf("%s",a);
    }
    else
    {
        printf("%s",b);
    }
    return 0;
}
