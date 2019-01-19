#include <stdio.h>

int main()
{
    int i,n,a[100],s,k;
    scanf("%d",&n);
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<k;i++)
    {
        s=s+a[i];
    }
    printf("%d",s);
    

    return 0;
}
