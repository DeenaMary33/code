#include <stdio.h>
#include <math.h>
#define PI 3.14159265
int main ()
{
   int x;
   float res, ans;
   scanf("%d",&x);
   ans = PI / 180;
   res = sin(x*ans);
   printf("%f",res);
   return(0);
}
