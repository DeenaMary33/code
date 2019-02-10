#include <stdio.h>

int main()
{
    int l,b,h,s,v;
    scanf("%d %d %d",&l,&b,&h);
    s=2*((l*b)+(l*h)+(b*h));
    v=l*b*h;
    printf("%d %d",s,v);

    return 0;
}
