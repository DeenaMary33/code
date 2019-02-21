#include <stdio.h>
int main()
{
    int n,k,i,l,ans;
    scanf("%d%d",&n,&k);
    if(n>k)
    {
        l=n;
    }
    else
    {
        l=k;
    }
    for(i=l;i>=1;i--)
    {
        if(n%i==0 && k%i==0)
        {
            printf("%d",i);
            break;
        }
    }

    return 0;
}
