#include <stdio.h>

int main()
{
    int a,n,d,t=0,s=0,i;
    scanf("%d",&n);
    scanf("%d",&a);
    scanf("%d",&d);
    for(i=1;i<=n;i++)
    {
        t=a+(i-1)*d;
        s=s+t;
    }
    printf("%d",s);
    

    return 0;
}
