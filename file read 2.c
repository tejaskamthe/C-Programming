#include<stdio.h>
#include<stdlib.h>
void main()
{
    FILE *fp;
    char ch[50];
    fp=fopen("a.txt","w");
    if(fp==NULL)
    {
        printf("Error");
        exit(1);
    }

    //fputs(ch,fp);
    printf("Enter the name: ");
    scanf("%s",&ch);
    fprintf(fp,"File Containt:%s",ch);
    fclose(fp);
}
