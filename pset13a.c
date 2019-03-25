#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%s",str);
    if(str[3]=='0' && str[4]=='1')
    {
        printf("january");
    }
    else if(str[3]=='0' && str[4]=='2')
    {
        printf("February");
    }
    else if(str[3]=='0' && str[4]=='3')
    {
        printf("march");
    }
    else if(str[3]=='0' && str[4]=='4')
    {
        printf("april");
    }
    else if(str[3]=='0' && str[4]=='5')
    {
        printf("may");
    }
    else if(str[3]=='0' && str[4]=='6')
    {
        printf("june");
    }
    else if(str[3]=='0' && str[4]=='7')
    {
        printf("july");
    }
    else if(str[3]=='0' && str[4]=='8')
    {
        printf("august");
    }
    else if(str[3]=='0' && str[4]=='9')
    {
        printf("september");
    }
    else if(str[3]=='1' && str[4]=='0')
    {
        printf("october");
    }
    else if(str[3]=='1' && str[4]=='1')
    {
        printf("november");
    }
    else if(str[3]=='1' && str[4]=='2')
    {
        printf("december");
    }
    else
    {
        printf("invalid");
    }
    return 0;
}
