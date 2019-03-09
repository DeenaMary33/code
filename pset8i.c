#include <stdio.h>
int main()
{
    int n,a[100],i,d=0,r,j,temp=0;
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
             d=a[i]-a[j];
            }
            else
            {
                d=a[j]-a[i];
            }
            if(d>temp)
            {
                temp=d;
            }
        }
    }
        printf("%d",temp);
    return 0;
}
