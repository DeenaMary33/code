#include <stdio.h>
int main()
{
    int num,q,i;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            q=num/i;
            
    if(q%2!='\0')
    {
        printf("%d",i);
        break;
    }
        }
    }

    return 0;
}
