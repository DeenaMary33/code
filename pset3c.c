#include <stdio.h>
int main()
{
    int n,p,a[100],j,i,k,max=0;
    scanf("%d%d",&n,&p);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    j=0;
    while(j<p)
    {
        scanf("%d",&k);
        a[n]=k;
        n++;
        for(i=0;i<n;i++)
        {
            if(a[i]>max)
            {
                max=a[i];
            }
        }
    
    printf("%d ",max);
    
    j++;
    }
    return 0;
}
