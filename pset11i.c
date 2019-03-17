#include <stdio.h>

int main()
{
    int n,a[1000],b[1000],i,j,s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
     s=s+a[i];
     b[j]=s;
     j++;
    }
    for(j=n-1;j>=0;j--)
    {
        printf("%d ",b[j]);
        
    }
    return 0;
}
