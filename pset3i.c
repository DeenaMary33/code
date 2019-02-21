#include <stdio.h>
int main()
{
    int l,r,c=0,i,j;
    scanf("%d %d",&l,&r);
    for(i=l+1;i<r;i++)
    {
        for(j=2;j<r;j++)
        {
            if((j*j)==i)
            {
                c++;
            }
        }
    }
    printf("%d",c);

    return 0;
}
