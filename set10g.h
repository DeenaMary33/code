#include <stdio.h>
int main()
{
    int num,r,t=0;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        t=t*10+r;
        num=num/10;
    }
    printf("%d",t);
    return 0;
}
