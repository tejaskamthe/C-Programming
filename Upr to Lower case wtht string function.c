#include<stdio.h>
int main()
{
    char str[30];
    int i;
    printf("Enter The String: ");
    gets(str);
    for(i=0;i<=strlen(str);i++)
    {
        if(str[i]>=65 && str[i]<=89)
        {
            str[i]=str[i]+32;
        }
        printf("\n Upper case to lower case string is: %s",str);
    }
    return 0;
}
