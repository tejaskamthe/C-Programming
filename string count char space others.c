#include<stdio.h>
int main()
{
    char str[100];
    int nletter,ndigit,nspace,nother;
    int i;
    printf("Enter a Line of Text:\n");
    gets(str);
    nletter=ndigit=nspace=nother=0;
    i=0;
    while(str[i]!='\0')
    {
        char ch=str[i];
        if(ch>='A' && ch<='Z' || ch>='a' && ch<='z')
            nletter++;
        else if(ch>='0'&&ch<='9')
            ndigit++;
        else if(ch==' ' || ch=='\n' || ch=='\t')
            nspace++;
        else nother++;
        i++;
    }
    printf("Letters: %d\t White spces: %d\n",nletter,nspace);
    printf("Digits: %d\t Other chars: %d\n",ndigit,nother);
    getch();
}
