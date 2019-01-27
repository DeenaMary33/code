#include <stdio.h>

int main()
{
    int n,a[100],i,t=0,avg;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        t=t+a[i];
    
    }
    avg=t/n;
    printf("%d",avg);

    return 0;
}
