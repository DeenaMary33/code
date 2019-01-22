#include <stdio.h>

int main()
{
    int a[10],i,j,temp,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
          temp=a[i];
          a[i]=a[j];
          a[j]=temp;
            }
        }
    }
     i=n/2;
     printf("%d",a[i]);
    
    

    return 0;
}

