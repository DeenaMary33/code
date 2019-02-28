#include <stdio.h>
int main()
{
    int a[20],i,n,j,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
   i=0;
   while(i<n-1)
    {
        for(j=i+1;j<=n;j++)
        {
            if(a[i]>a[j])
            {
              printf("%d ",a[i]);
              i++;
              break;
              
            }
            else
            {
                printf("%d ",a[j]);
                i++;
                break;
          }  
        }
    }
    
    return 0;
}
