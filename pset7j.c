#include <stdio.h>
int main()
{
    char s[1000],s1[6]="Answer";
    int i,c;
    scanf("%s",s);
    c=strlen(s);
    s[c]=' ';
    c++;
    for(i=0;s1[i]!='\0';i++)
    {
        s[c]=s1[i];
        c++;
    }
    printf("%s",s);
    
    return 0;
}
