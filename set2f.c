#include <stdio.h>

int main()
{
    int num1,num2,i,j,flag=0;
    scanf("%d",&num1);
    scanf("%d",&num2);
    for(i=num1+1;i<num2;i++)
    {  flag=0;
        for(j=2;j<i;j++)
        {
            if(i%j==0)
            {
                flag=1;
            }
        }
        if(flag==0)
        {
            printf("%d ",j);
        }
    }
    

    return 0;
}
