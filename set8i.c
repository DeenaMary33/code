#include <stdio.h>
int main()
{
    int n,m,t=0,c,i;
    scanf("%d %d",&n,&m);
    c=n*m;
    for(i=1;i<=c;i++)
    {
        if(c==(i*i))
        {
            t=1;
        }
    }
    if(t==1)
    printf("yes");
    else
    printf("no");

    return 0;
}
