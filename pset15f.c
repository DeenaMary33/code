#include <stdio.h>

int main()
{
    long int a,b,i,res,fact=1,fact1=1;
    scanf("%ld%ld",&a,&b);
    for(i=1;i<=a;i++)
    {
        fact=fact*i;
    }
    for(i=1;i<=b;i++)
    {
        fact1=fact1*i;
    }
    res=fact/fact1;
    printf("%ld",res);

    return 0;
}
