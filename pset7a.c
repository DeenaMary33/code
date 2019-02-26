#include <stdio.h>
int main()
{
    int n,k,a[20],i,sum=0,flag=0,j;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { flag=0;
    for(j=i+1;j<n;j++)
    {
        sum=a[i]+a[j];
        if(sum==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    break;
    }
    
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
