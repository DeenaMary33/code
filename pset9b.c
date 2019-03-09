#include <stdio.h>
int main()
{
    int a[1000],n,c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        c++;
    }
    if(c==1)
    {
        printf("%d",a[0]);
    }
    else
    {
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
          c=(a[i])&(a[j]);
        }
    }
    printf("%d",c);
    }
    return 0;
}
