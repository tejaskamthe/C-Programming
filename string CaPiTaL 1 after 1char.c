#include<stdio.h>
int main()
{
    char str[30];
    printf("Enter your String:");
    gets(str);
    int i=0,j=0;
    int len=sizeof(str)/sizeof(str[0]);
    for(i=0;i<len;i++)
    {
        if(j%2==1)
        {
            if(str[i]>64 && str[i]<91)
                str[i]+=32;
        }
        else
        {
            if(str[i]>96 && str[i]<123)
                str[i]-=32;
        }
        if(str[i]==' ')
        {
            continue;
        }
        j++;
    }
    printf("After Converting String is= %s",str);
}
