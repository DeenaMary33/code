#include <stdio.h>

int main()
{
    int n,a[1000],i,c;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==0)
        {
            c=i;
        }
    }
    for(i=0;i<c;i++)
    {
        if(a[i]!=0)
        {
            printf("%d ",a[i]);
        }
    }

    return 0;
}
