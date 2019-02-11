#include<stdio.h>
#include<string.h>
int main()
{
	int n,c,res,i;
	char a[100];
	scanf("%s %d",a,&n);
	c=strlen(a);
	res=c-n;
	for(i=res;i<c;i++)
	{
		printf("%c",a[i]);
	}
	return 0;	
}
