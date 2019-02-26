#include <stdio.h>
int main()
{
    int a[20],b[20],c=1,i,j,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {    c=1;
        for(j=0;j<n;j++)
        {
            if(a[i]==b[j])
            {
                 c=2;
                 b[j]='$';
            if(c==2)
            {
                printf("%d ",a[i]);
                break;
            }
            }
        }
    }

    return 0;
}
