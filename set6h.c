#include <stdio.h>
int main()
{
    int a[20],n,k,c=0,i;
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]==k)
        {
            c=1;
            break;
        }
        
    }
    if(c==1)
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
    
    

    return 0;
}
