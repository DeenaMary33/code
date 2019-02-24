#include <stdio.h>
int main()
{
    int n,i,n1,n2,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d%d",&n1,&n2);
        if(n1<n2)
        {
            c+=1;
        }
    }
    printf("%d",c);
    return 0;
}
