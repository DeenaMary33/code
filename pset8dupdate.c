#include <stdio.h>
int main()
{
    long int a,b,p=1,i;
    scanf("%ld%ld",&a,&b);
    if((a>1 && a<=50) && (b>=1 && b<=50))
    {
     for(i=1;i<=b;i++)
    {
        p=p*a;
    }
    }
    printf("%ld",p);

    return 0;
}
