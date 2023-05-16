#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch[50];
    fp=fopen("a.txt","r");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    fgets(ch,20,fp);
    printf("File Containt: %s",ch);
    fclose(fp);
}
