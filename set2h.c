#include <stdio.h>

int main()
{
    int a,temp,f,z,r,d=1,sum=0,c=0,l,b,i; 
    scanf("%d %d",&a,&b);

    for(i=a;i<b;i++)
    {
        temp=i;
        z=i;
        sum=0;
        f=i;
        c=0;
        
    while(temp)
    {
        temp=temp/10;
        c++;
    }
    while(f)
    { 
       l=c;
       d=1;
       r=f%10;
         while(l)
         {
          d=d*r;
          l--;
         }
          sum=sum+d;
          f=f/10;  
    }
    if(sum==z)
    {
     printf("%d ",sum);
    }
    }
    return 0;
}
