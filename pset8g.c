#include <stdio.h>
int main()
{
    int n,a[1000],m,i,c=1,c1=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
    
        if(a[i]<a[i+1])
        {
          c++;    
        }
        else
        {
            if(c1<c)
            {
                c1=c;
                c=1;
            }
        }
    }
    
        printf("%d",c1);
    return 0;
}
