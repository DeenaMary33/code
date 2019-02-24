#include <stdio.h>
int main() 
{
	char s[200];
	int i,j;
	scanf("%[^\n]s",s);
	for(i=0;s[i]!='\0';i++)
	{
		if(s[i]==' ')
		{
		    j=i;
		    while(s[j+1]==' ')
		    {
		        if(s[j+1==' '])
		        {
		           s[j]='$';
		           s[j+1]='$';
		           j=j+1;
		        }
		        else
		        	break;
         }
		}
	}
	for(i=0;s[i]!='\0';i++)
	{
	if(s[i]!='$')
	{
	printf("%c",s[i]);
	
	}
	}
	return 0;
}
