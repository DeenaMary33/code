#include <stdio.h>
int main()
{
    int n,a[1000],i,j=0,b[1000],temp;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        b[j]=a[i];
        j++;
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                temp=a[i];
                a[i]=a[j];
                a[j]=temp;
            }
        }
    }
    for(i=0;i<n;i++)
    for(j=0;j<n;j++)
    if(a[i]==b[j])
        printf("%d ",j+1);
    return 0;
}
