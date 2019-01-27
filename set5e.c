#include <stdio.h>
int main()
{
    int num,c=0;
    scanf("%d",&num);
    while(num)
    {
        num=num/10;
        c++;
    }
    printf("%d",c);

    return 0;
}
