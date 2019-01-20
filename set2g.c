#include <stdio.h>

int main()
{
    int a,temp,f,z,r,d=1,sum=0,c=0,l; 
    scanf("%d",&a);
    temp=a;
    z=a;
    while(a)
    {
        a=a/10;
        c++;
    }
    while(temp)
    {   l=c;
        d=1;
        r=temp%10;
        while(l)
        {
         d=d*r;
         l--;
        }
        sum=sum+d;
        temp=temp/10;
    }
    if(sum==z)
    {
     printf("yes");
    }
    else
    {
        printf("no");
    }
    return 0;
}
