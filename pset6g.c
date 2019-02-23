#include <stdio.h>
int main()
{
    char s[100],k;
    int i,n,c=0;
    scanf("%s %c",s,&k);

    for(i=0;s[i]!='\0';i++)
    {
       if(s[i]==k)
       {
           c++;
          
       }
    }
    printf("%d",c);

    return 0;
}
