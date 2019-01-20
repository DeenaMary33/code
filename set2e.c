#include <stdio.h>

int main()
{
    int n,q,i;
    scanf("%d%d",&n,&q);
    for(i=n+1;i<q;i++)
    {
        if(i%2==0)
        {
            printf("%d ",i);
        }
    }

    return 0;
}
