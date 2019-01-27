#include <stdio.h>

int main()
{
    char a[100],b[100];
    int i,c=0,j;
    scanf("%s %s",a,b);
    for(i=0;a[i]!='\0';i++)
    {
        c++;
    }
    i=c;
    for(j=0;b[j]!='\0';j++)
    {
        a[i]=b[j];
        i++;
    }
    printf("%s",a);

    return 0;
}
