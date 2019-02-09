#include <stdio.h>
int main()
{
   int n,l,r,i,t=0;
   scanf("%d",&n);
   scanf("%d %d",&l,&r);
   for(i=l+1;i<r;i++)
   {
       if(n==i)
       {
          t=1;
          break;
       }
       
   }
   if(t==1)
   {
       printf("yes");
   }
   else
   {
       printf("no");
   }
   

    return 0;
}
