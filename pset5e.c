#include <stdio.h>
int main()
{
    int p,a,i,j,perimeter,area,flag=0;
    scanf("%d%d",&p,&a);
    for(i=0;i<(p/2);i++)
    {
        for(j=0;j<(p/2);j++)
        {
            perimeter=2*(i+j);
            area=i*j;
            if(perimeter==p && area==a)
            {
                flag=1;
                break;
            }
        }
    }
    if(flag==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }

    return 0;
}
