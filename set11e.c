#include <stdio.h>

int main()
{
    int n,k,k1,c=0,i;
    scanf("%d %d",&n,&k);
    k1=k;
    if(k1==0)
    {
        c=1;
    }
    else
    {
    while(k1)
    {
      k1=k1/10;
      c++;
    }
    }
    for(i=0;i<c;i++)
    {
      n=n*10;
    }
    printf("%d",n+k);
    return 0;
}
