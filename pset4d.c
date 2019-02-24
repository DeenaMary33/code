#include <stdio.h>
int main()
{
    char s[100];
    int i,j;
    scanf("%s",s);
    for(i=0;s[i]!='\0';i=i+3)
    {
          printf("%c",s[i]); 
    }

    return 0;
}
