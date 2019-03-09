#include <stdio.h>
int main()
{
    int a[1000],n,c,i,j,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
          c=(a[i])&(a[j]);
         if(c>max)
         {
           max=c;
         }
         
        }
    }
    printf("%d",c);
    return 0;
}
