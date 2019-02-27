#include <stdio.h>
int main()
{
    int n,i,k,a[30];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n-k;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}
