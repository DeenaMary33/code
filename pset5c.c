#include <stdio.h>
int main()
{
    char a[1000],a1[1000];
    int i,j,c,c1,k=0;
    scanf("%s %s",a,a1);
    c=strlen(a);
    c1=strlen(a1);
    i=c-c1;
    j=0;
    while(i<c && j<c1)
    {
       if(a[i]==a1[j])
       {
           k++;
       }
       i++;
       j++;
    }
    if(k==c1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
