#include <stdio.h>
int main()
{
    int n,a[100],i,j,s=1,c=0,x;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=1;i<=n;i++)
        {
            c=0;
            for(j=0;j<n;j++)
            {
            if(a[j]%i==0)
            {
                c++;
            }
            
        }
        if(c==n)
        {
           x=i;
        }
    }
    printf("%d",x);

    return 0;
}
