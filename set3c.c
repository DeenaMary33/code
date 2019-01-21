#include <stdio.h>

int main()
{
    int a[10],n,i,min;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++)
    {
    
        if(min>a[i])
        {
            min=a[i];
        }
        
    }
    printf("%d,Minimum number",min);

    return 0;
}

