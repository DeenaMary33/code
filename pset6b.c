#include <stdio.h>
int main()
{
    int n,a[10],i,temp,j,k;
    scanf("%d%d",&n,&k);
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
    printf("%d",a[k-1]);
    return 0;
}
