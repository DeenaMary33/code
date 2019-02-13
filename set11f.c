#include <stdio.h>

int main()
{
    int a[100],n,i,j,k,r,l=0;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[i]='$';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2!=0)
        {
            r=a[i];
            l++;
        }
        if(l==k)
        {
            break;
        }
    }
    printf("%d",r);
    return 0;
}
