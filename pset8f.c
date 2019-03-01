#include <stdio.h>
int main()
{
    int i,j,n,a[20],c=0,c1=0,t,t1;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==0)
        {
            c++;
            t=a[i];   
        }
        else
        {
            c1++;
            t1=a[i];
        } 
    }
    if(c==1)
        {
             printf("%d",t);
        }
        if(c1==1)
        {
             printf("%d",t1);
        }
    return 0;
}
