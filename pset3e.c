#include <stdio.h>
int main()
{
  int n,i,c,k=0,s[10],m,j,t;
  char a[10][10];
  scanf("%d",&n);
  for(i=0;i<n;i++)
  {
      
      scanf("%s",&a[i]);
      
  }
  
   for(i=0;i<n;i++)
  {
c=strlen(a[i]);
      
 s[k]=c;
      k++;
  }
   for(i=0;i<n;i++)
  {
  for(j=i+1;j<n;j++)
   {
       if(s[i]>s[j])
       {
           
           
           t=s[i];
           s[i]=s[j];
           s[j]=t;
       }
   }
  }
  for(i=0;i<n;i++)
  {
      for(j=0;j<n;j++)
      {
          
          if(s[i]==strlen(a[j]))
          printf("%s\n",a[j]);
      }  
  }
}
