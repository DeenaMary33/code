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
    num=t;
    while(num)
    {
        r=num%10;
        if(r%2!=0)
        {
            printf("%d ",r);
        }
        num=num/10;
    }

    return 0;
}
