#include <stdio.h>
int main()
{
    long int n,k,c=0,r=0;
    scanf("%ld%ld",&n,&k);
    while(n!=0)
    {
      r=n%10;
      if(r==k)
      {
          c++;
      }
      n=n/10;
    }
    printf("%d",c);
    return 0;
}
