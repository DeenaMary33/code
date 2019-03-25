#include <stdio.h>
int main()
{
    long long int a,rem,t=0,t1=1;
    scanf("%llo",&a);
    while(a)
    {
        rem=a%8;
        a=a/8;
        t=t+(rem*t1);
        t1=t1*2;
    }
    printf("%llo",t);

    return 0;
}
