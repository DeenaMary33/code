#include <stdio.h>
int main()
{
    int num,r,t=1;
    scanf("%d",&num);
    while(num)
    {
        r=num%10;
        t=t*r;
        num=num/10;
    }
    printf("%d",t);

    return 0;
}
