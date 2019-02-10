#include <stdio.h>
int main()
{
    int n,k,a[20],i,s;
    scanf("%d %d",&n,&k);
    for(i=1;i<=n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=1;i<=n;i++)
    {
        if(i==k)
        {
            s=a[i];
        }
        
    }
    printf("%d",s);

    return 0;
}
