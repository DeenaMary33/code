#include <stdio.h>

int main()
{
    int a[10],t,n,i,j;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
     scanf("%d",&a[i]);   
    }
    for(i=1;i<=n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        if(a[i]>a[j])
        {
         t=a[i];
         a[i]=a[j];
         a[j]=t;
        }
        }
    }
    for(i=0;i<n;i++)
    {
     printf("%d ",a[i]);   
    }
    
        
        return 0;
}

