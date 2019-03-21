#include <stdio.h>

int main()
{
    int n,m,a[1000],b[1000],c[1000],i,j,k=0,temp;
    scanf("%d%d",&n,&m);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<m;i++)
    {
        scanf("%d",&b[i]);
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                a[j]='$';
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(b[i]==b[j])
            {
                b[j]='$';
            }
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            if(a[i]!='$' && b[j]!='$')
            {
            if(a[i]==b[j])
            {
                c[k]=b[j];
                k++;
            }
            }
        }
    }

  for(i=0;i<k;i++)
  {
      for(j=i+1;j<k;j++)
      {
          if(c[i]>c[j])
          {
              temp=c[i];
              c[i]=c[j];
              c[j]=temp;
          }
      }
  }
for(i=0;i<k;i++)
{
   printf("%d ",c[i]); 
}
    return 0;
}
