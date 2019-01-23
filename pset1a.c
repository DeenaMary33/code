#include <stdio.h>

int main()
{
    char ch[20],str[20];
    int i,j,c=0;
    scanf("%s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        c++;
    }
    j=0;
     for(i=c-1;i>=0;i--)
    {
      str[j]=ch[i];
      j++;
    }
    str[j]='\0';
    printf("%s",str);

    return 0;
}
