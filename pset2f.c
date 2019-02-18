#include <stdio.h>
int main()
{
    int a[100],b[100],n,i,j,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    { c=0;
        for(j=i+1;j<n;j++)
        {
        
            if(a[i]==a[j])
            {
                c=1;
                a[j]='\0';
            }
            if(c==1)
            {
                a[i]='\0';
            }
        }
    }
            j=0;
            for(i=0;i<n;i++)
            {
                if(a[i]!='\0')
                {
                 b[j]=a[i];
                 j++;
                }
            }
            b[j]='\0';
            
            for(i=0;b[i]!='\0';i++)
            {
                printf("%d",b[i]);
            }
    return 0;
}

