#include <stdio.h>
#include<string.h>
int main(void) 
{
int i,k,c,n[20];
char ch[20];
gets(ch);
c=strlen(ch);
for(i=0;i<c;i++)
{
	if(ch[i]=='I')
	n[i]=1;
	else if(ch[i]=='V')
	n[i]=5;
	else if(ch[i]=='X')
	n[i]=10;
	else if(ch[i]=='L')
	n[i]=50;
	else if(ch[i]=='C')
	n[i]=100;
	else if(ch[i]=='D')
	n[i]=500;
	else if(ch[i]=='M')
	n[i]=1000;
	else
	printf("invalid");
}
k=n[c-1];
for(i=c-1;i>0;i--)
{
	if(n[i]>n[i-1])
	k=k-n[i-1];
	else
	k=k+n[i-1];
}
printf("%d",k);
	return 0;
}
