#include <stdio.h>

int main()
{
long int n,r,i,j,ans,c,fact=1,fact1=1,fact2=1;
scanf("%ld %ld",&n,&r);
for(i=1;i<=n;i++)
{
fact=fact*i;
}
for(i=1;i<=r;i++)
{
fact1=fact1*i;
}
c=n-r;
for(i=1;i<=c;i++)
{
fact2=fact2*i;
}
ans=fact/(fact1*fact2);
printf("%ld",ans);

    return 0;
}
