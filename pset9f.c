#include <stdio.h>
int main()
{
    int n,i,a[1000],r=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        r=r^a[i];
    }
    printf("%d",r);

    return 0;
}
