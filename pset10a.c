#include <stdio.h>
int main()
{
    long int a,rem,t=0,t1=1;
    scanf("%ld",&a);
    while(a)
    {
        rem=a%2;
        a=a/2;
        t=t+(rem*t1);
        t1=t1*10;
    }
    printf("%ld",t);

    return 0;
}
