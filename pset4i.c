#include <stdio.h>

int main()
{
    int num,i,p=1,j,flag=0;
    scanf("%d",&num);
    if(num==1)
    {
        printf("yes");
    }
    else
    {
    for(i=1;i<=num;i++)
    {
      for(j=i;j>=0;j--)
      {
         p=p*2;
        if(p==num)
        {
            flag=1;
            break;
        }
      }
    }
    if(flag==1)
    {
       printf("yes");
    }
    else
    {
        printf("no");
    }
    }

    return 0;
}
