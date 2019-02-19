#include<stdio.h>
void main()
{
    int n,a[20],k,i,r=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    while(k)
    {
        r=a[n-1];
        for(i=n-1;i>0;i--)
        {
          a[i]=a[i-1];  
        }
        a[0]=r;
        k--;
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}    
