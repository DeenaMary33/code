#include <stdio.h>
#include<string.h>
int main()
{
    char a[20];
    char str[]="kabali";
    int i,j,k=0,c=0,n,temp,n1,l;
    scanf("%d",&n1);
    n=strlen(str);
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(str[i]>str[j])
            {
                temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    //printf("%s",str);
    while(k<n1)
    {
        scanf("%s",a);
        l=strlen(a);
        if(n==l)
        {
            for(i=0;i<l;i++)
            {
                for(j=i+1;j<l;j++)
                {
                    if(a[i]>a[j])
                    {
                        temp=a[i];
                        a[i]=a[j];
                        a[j]=temp;
                    }
                }
                
            }
        
            if(strcmp(str,a)==0)
            {
               c++;
            }
        }
        k++;
    }
        printf("%d",c);
        
    return 0;
}
