#include <stdio.h>
int main()
{
    int num,t=0,i;
    scanf("%d",&num);
    for(i=2;i<num;i++)
    {
        if(num%i==0)
        {
            printf("yes");
            break;
        }
        else
        {
            printf("no");
            break;
        }
    }
 
    return 0;
}
