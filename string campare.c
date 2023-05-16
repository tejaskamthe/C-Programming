#include<stdio.h>
int main()
{
    char a[100],b[100];
    printf("Enter The Two Strings:");
    scanf("%s\n%s",&a,&b);

    if(strcmp(a,b) == 0)
        printf("strings are Equal.");
    else
        printf("Strings Are Not Equal.");
    return 0;
}
