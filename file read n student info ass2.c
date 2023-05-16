#include<stdio.h>
int main()
{
    FILE *fp;
    char c;
    fp=fopen("a.txt","r");
    if(fp==NULL)
    {
        printf("File Don't have data..");
    }
    printf("Students Info Is Here:");
    while((c=fgetc(fp))!=EOF)
    {
        printf("%c",c);
    }
    fclose(fp);
}
