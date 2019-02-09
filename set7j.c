#include <stdio.h>
int main()
{
    int n,i,res,res1,res2;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        res=pow(2,i);
        if(res>n)
        {
          res1=i;
          break;
        }
    }
        res2=pow(2,res1);
        printf("%d",res2);
    return 0;
}
