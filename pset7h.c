#include <stdio.h>
int main()
{
    int n,a[100],i,j,c=0,t=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {   c=1;
        for(j=i+1;j<=n;j++)
        {
            if(a[i]==a[j])
            {
                c++;
            }
            if(a[i]!=a[j])
            {
                break;
            }
        }
        if(c>t)
        {
          t=c;
        }    
    }
    
    printf("%d",t);
    return 0;
}
