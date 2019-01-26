#include <stdio.h>

int main()
{
    int h,m,h1,m1,result,result1;
    scanf("%d %d",&h,&m);
    scanf("%d %d",&h1,&m1);
    result=abs(h-h1);
    result1=abs(m-m1);
    printf("%d %d",result,result1);

    return 0;
}
