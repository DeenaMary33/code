#include <stdio.h>
int main()
{
    int n,k;
    float ans;
    scanf("%d%d",&n,&k);
    ans=n>>k;
    printf("%.2f",ans);
    return 0;
}
