#include <stdio.h>
int main()
{
    int n,k,t=1,i;
    scanf("%d%d",&n,&k);
    for(i=1;i<=k;i++)
    {
        t=t*n;
    }
    printf("%d",t);
    return 0;
}
