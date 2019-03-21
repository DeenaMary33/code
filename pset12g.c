#include <stdio.h>
int main()
{
   char str[1000],s[1000];
   int i,l,k=0;
   scanf("%s",str);
   l=strlen(str);
   for(i=l-1;i>=0;i--)
   {
   if(i>0)
   printf("%c-",str[i]);
   if(i==0)
   printf("%c",str[i]);
   }
    return 0;
}
