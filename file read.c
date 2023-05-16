#include<stdio.h>
int main()
{
    FILE *fp;
    char ch;
    fp= fopen("a.txt","r");
    if(fp == NULL)
    {
        printf("error: \n");        //****
        exit(0);
    }
    printf("File Is:\n ");

     while((ch=fgetc(fp))!=EOF)
     {
        printf("%c", ch);
     }

    fclose(fp);
    //getch();
}
