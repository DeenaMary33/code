#include <stdio.h>

int main()
{
    int n,r,t=0,a;
    scanf("%d",&n);
    a=n;
    while(n)
    {
        r=n%10;
        t=t*10+r;
        n=n/10;
        
    }
    if(t==a)
    {
        printf("Yes");
    }
    else
    {
        printf("no");
    }
    

    return 0;
}
