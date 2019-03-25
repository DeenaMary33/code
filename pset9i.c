#include <stdio.h>

int main()
{
    long int n,r,i,j,ans,c,fact=1,fact1=1;
scanf("%ld %ld",&n,&r);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
c=n-r;
for(i=1;i<=c;i++)
{
fact1=fact1*i;
}
ans=fact/fact1;
printf("%ld",ans);

    return 0;
}
