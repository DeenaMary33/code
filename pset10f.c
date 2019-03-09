#include <stdio.h>
int main()
{
    long int i,n,p=1,z,a,b,c=0,r;
    scanf("%ld",&n);
    a=n;
    while(a)
    {
        a=a/10;
        c++;
    }
    while(c)
    {
    p=p*10;
    c--;
    }
    p=p/10;
    b=n;
    while(b)
    {
        b=b/p;
        break;
    }
    while(n)
    {
        r=n%10;
        break;
    }
    z=b+r;
    printf("%d",z);
    return 0;
}
