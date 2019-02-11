#include <stdio.h>
int main()
{
    int a,d,n,sum=0,i;
    scanf("%d %d %d",&a,&d,&n);
    for(i=0;i<n;i++)
    {
     sum=sum+a;
     a=a+d;
    }
    printf("%d",sum);
    return 0;
}
