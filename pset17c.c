#include <stdio.h>
int main()
{
    int n,k,a[1000],i,flag=0;
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            flag=1;
            break;
        }
    }
    if(flag==0)
    {
        printf("no");
    }
    else
    {
        printf("yes");
    }
    return 0;
}
