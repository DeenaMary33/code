#include <stdio.h>
int main()
{
    char s1[1000],s2[100],s3[100];
    int i,n,j,l,c=1,max,k=0,p;
    gets(s1);
    l=strlen(s1);
    for(i=0;i<l;i++)
    {
        c=1;
        for(j=i+1;j<l;j++)
        {
            if(s1[i]==s1[j])
            {
                c++;
                s1[j]='\0';
            }
        }
        if(s1[i]!='\0')
        {
            s2[k]=s1[i];
            s3[k]=c;
            k++;
            if(max<=c)
            {
                max=c;
            }
        }
    }
    printf("%d ",max);
    for(i=0;i<k;i++)
    {
        if(s3[i]==max)
        {
            printf("%c",s2[i]);
        }
    }
    

    return 0;
}
