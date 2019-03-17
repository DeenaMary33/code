#include <stdio.h>
int main()
{
    int n,a[1000],i,s=0,j,b[1000];
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=0;i<n-1;i++)
    {
       b[j]=a[i]+a[i+1];
       j++;
    }
    for(i=0;i<n;i++)
    {
        s=s+b[i];
    }
    printf("%d",s);
    return 0;
}
