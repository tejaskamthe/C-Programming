#include<stdio.h>
#include<stdlib.h>
int main()
{
    char *text;
    text=(char*)malloc(sizeof(char));
    printf("Enter The Text:");
    gets(text);
    printf("Inputed Text Is:%s",text);
    free(text);
}
