#include <stdio.h>
int main()
{
    int a[1000],n,max=0,i,j,r,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
    }
    if(c==1)
    {
        printf("%d",a[0]);
    }
    else
    {
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
        
          r=(a[i])|(a[j]);
         if(r>max)
         {
           max=r;
          }
        }
        
    }
    
    printf("%d",r);
    }
    return 0;
}
