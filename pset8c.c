#include <stdio.h>
int main()
{
    int n,k,i,a[100];
    scanf("%d%d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            printf("%d",i+1);
            break;
        }
    }

    return 0;
}
