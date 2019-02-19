#include <stdio.h>

int main()
{
    int num,c=0,t,sum=0,r;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        t=r*r;
        sum=sum+t;
        num=num/10;
    }
    printf("%d",sum);

    return 0;
}
