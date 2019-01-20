#include <stdio.h>

int main()
{
    int n,p=1,k;
    scanf("%d",&n);
    scanf("%d",&k);
    while(k)
    {
        p=p*n;
        k--;
    }
    printf("%d",p);
    return 0;
}
