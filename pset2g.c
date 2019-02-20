#include <stdio.h>

int main()
{
    int l,r,sn,ans,i;
    scanf("%d %d",&l,&r);
    for(i=1;i<=l && i<=r;i++)
    {
        if(l%i==0 && r%i==0)
        {
            sn=i;
        }
    }
   ans=(l*r)/sn;
   printf("%d",ans);
    return 0;
}
