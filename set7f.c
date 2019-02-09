#include <stdio.h>
int main()
{
    int i,num,flag=0;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            flag=1;
        }
    }
    if(flag==0)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
