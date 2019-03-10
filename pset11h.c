#include<stdio.h>
int main()
{
    int a[10000],i,j=0,n,b[10000],c[10000],s=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    
     for(i=0;i<n;i++)
    {
        s=s+a[i];
        b[j]=s;
        j++;
    }
    i=0;
    while(i<n)
    {
        for(j=n-1;j>=0;j--)
        {
            printf("%d ",b[i]);
            i++;
            
        }
    }
    
    return 0;
}
