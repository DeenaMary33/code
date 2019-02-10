#include <stdio.h>

int main(void) 
{
int x,y,remainder,lcm,a,b,gcd;
scanf("%d",&x);
scanf("%d",&y);
a=x;
b=y;
do
{
remainder=x%y;
if(remainder==0)
break;
x=y;
y=remainder;
}while(remainder!=0);
gcd=y;
lcm=(a*b)/gcd;
printf("%d ",lcm);
return 0;
}
