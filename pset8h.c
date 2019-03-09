#include <stdio.h>
int main()
{
    int a[1000],b[1000],c[1000],i,j,n,m,temp;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
       scanf("%d",&b[i]);
    }
    j=0;
    for(i=0;i<n;i++)
    {
        c[j]=a[i];
        j++;
    }
    for(i=0;i<m;i++)
    {
        c[j]=b[i];
        j++;
    }
    for(i=0;c[i]!='\0';i++)
    {
        for(j=i+1;c[j]!='\0';j++)
        {
        if(c[i]>c[j])
        {
          temp=c[i];
          c[i]=c[j];
          c[j]=temp;
        }
        }
    }
    for(i=0;c[i]!='\0';i++)
    {
        printf("%d ",c[i]);
    }
    return 0;
}
