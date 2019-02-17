#include <stdio.h>
#include<string.h>
int main()
{
    char s[50];
    int i,n,j,temp;
    scanf("%s",s);
    n=strlen(s);
    if(i%2==0)
   {
    for(i=0;i<n;i+=2)
    {
               temp=s[i];
               s[i]=s[i+1];
               s[i+1]=temp;
               
    }
       
       printf("%s",s);
    }
    else
    {
    for(i=0;i<n;i+=2)
    {
               temp=s[i];
               s[i]=s[i+1];
               s[i+1]=temp;
               
    }
       
       printf("%s",s);
    }
    
    return 0;
}
