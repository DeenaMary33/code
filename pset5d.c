#include <stdio.h>
int main()
{
    char s[100],temp;
    int k,n,i,j;
    scanf("%s %d",s,&k);
    n=strlen(s);
    for(i=0;i<k;i++)
    {
        temp=s[n-1];
        for(j=n-2;j>=0;j--)
        {
           s[j+1]=s[j]; 
        }
        s[0]=temp;
    }
    printf("%s",s);
    return 0;
}
