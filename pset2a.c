#include<stdio.h>
void main()
{
   char s[20];
   int i;
   scanf("%s",s);
   for(i=0;s[i]!='\0';i++)
   {
       if(s[i]=='s'|| s[i]=='S')
       {
           printf("yes");
           break;
       }
       else
       {
           printf("no");
           break;
       }
   }
}
