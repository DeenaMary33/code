#include <stdio.h>

int main()
{
   char a[20],s[20];
   int i,c=0;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       c++;
   }
   
   for(i=0;i<=c;i++)
   {
      printf("%c",a[i]);
   if(i==c)
   {
       printf(".");
   }
   }
   

    return 0;
}
