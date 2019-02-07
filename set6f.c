#include <stdio.h>
#include<string.h>
int main(void) 
{
	char ch[100];
	int n,i,t=0;
	scanf("%s",ch);
	n=strlen(ch);
	for(i=0;i<n;i++)
	{
		if((ch[i]>='a'&& ch[i]<='z')||(ch[i]>='A' && ch[i]<='Z'))
		{
			t=1;
		}
		else if(ch[i]>='0' && ch[i]<='9')
		{
			t=2;
		}
		else
		{
			t=0;
		}
	}
	if(t==1 && t==2)
	{
		printf("yes");
	}
	else
	{
		printf("no");
	}

	return 0;
}
