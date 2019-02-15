#include <stdio.h>
int main()
{
    int l,r,i,flag=0,c=0,j;
    scanf("%d %d",&l,&r);
    for(i=l;i<=r;i++)
    {  
        flag=0;
        for(j=2;j<i;j++)
        { 
            if(i%j==0)
            {
                flag=1;
            }
        }
        
           if(flag==0)
            {
                
                c++;
            }
    }

    printf("%d",c);
    return 0;
}
