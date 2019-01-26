#include<stdio.h>
void main()
{
    char ch[100];
    int i,c=0;
    scanf("%[^\n]s",ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]>='0' && ch[i]<='9')
        {
            c++;
        }
    }
    printf("%d",c);
}
