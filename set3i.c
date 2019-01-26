#include <stdio.h>
int main()
{
    int  num ;
    scanf("%d",&num);
  if ((num / 60)== 1) 
  {
   printf("%01d ",num/60);
  }
else 
{
printf("%01d ",num/60);
}
if ((num % 60)== 1) 
printf("%01d \n",num%60);
else 
printf("%01d \n",num%60);

return 0;
}
