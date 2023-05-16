#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fp;
    char ch;
    int wcnt=0,lcnt=0,chcnt=0;
    fp=fopen("b.txt","r");
    if(fp==NULL)
    {
        printf("no data in file");
        exit(0);
    }
    while(!feof(fp))
    {
        ch=fgetc(fp);
        chcnt++;
        if((ch==' ')||(ch=='\t')||(ch=='\n'))
        {
            wcnt++;
        }
        if(ch=='\n')
        {
            lcnt++;
        }
    }
    printf("No of charachter=%d\n",chcnt);
    printf("No of words=%d\n",wcnt);
    printf("no of lines=%d\n",lcnt);
    fclose(fp);
    return 0;
}

