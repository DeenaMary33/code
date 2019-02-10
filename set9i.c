#include <stdio.h>
#include<string.h>
int main() 
{	
   char a[10];
   int c=0,i,j,temp;
   scanf("%s",a);
   for(i=0;a[i]!='\0';i++)
   {
       c++;
   }
   for(i=0;i<c;i++)
   {
      for(j=i+1;j<c;j++)
      {
          if(a[i]>a[j])
          {
              temp=a[i];
              a[i]=a[j];
              a[j]=temp;
          }
      }
   }
   printf("%s",a);
	return 0;
}
