#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    n=n-m;
    if(n%2==0)
    {
        printf("even");
    }
    else
    {
        printf("odd");
    }

    return 0;
}
