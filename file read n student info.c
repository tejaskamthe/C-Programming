#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("a.txt","r");
    if(fp==NULL)
    {
        printf("File Don't Have Data..");
    }
    printf("Students Information In Here:\n");
    while((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
}
