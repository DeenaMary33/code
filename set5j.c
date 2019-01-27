#include<stdio.h>
int main()
{
    int num,p=1,i,t=0;
    scanf("%d",&num);
    for(i=0;i<num;i++)
    {
        p=2*p;
    
    if(num==p)
    {
        t=1;
    }
    }
    if(t==1)
    printf("yes");
    else
    printf("no");
    
    
    return 0;
}
