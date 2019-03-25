#include <stdio.h>
int main()
{
    long long int a,rem,t=0,t1=1;
    scanf("%lld",&a);
    while(a)
    {
        rem=a%10;
        a=a/10;
        t=t+(rem*t1);
        t1=t1*2;
    }
    printf("%llX",t);

    return 0;
}
