#include <stdio.h>
int main()
{
    int n,k,i,p=1;
    scanf("%d%d",&n,&k);
    for(i=1;i<=n;i++)
    {
        p=p*k;
        if(p==n)
        {
            printf("yes");
            break;
        }
        if(p>n)
        {
          printf("no");
          break;
        }
    }

    return 0;
}
