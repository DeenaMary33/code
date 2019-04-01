#include <stdio.h>
int main()
{
    char str[1000];
    int i,c=1;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]==str[i+1])
        {
            c++;
        }
        else
            {
                printf("%c",str[i]);
                printf("%d",c);
                c=1;
            }
        }
    

    return 0;
}
