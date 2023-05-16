#include<stdio.h>
int main()
{
    char s[100];
    int len=0,i,j;
    printf("enter the string \n");
    gets(s);
    len=strlen(s);
    for(i=0;i<len;i++)
    {
        if((s[i=='a']) || (s[i]=='e') || (s[i]='i') || (s[i]='o') || (s[i]='u'))
        {
            for(j=i;j<len;j++)
            {
                s[j]=s[j+1];
            }
            len--;
        }
        s[len+1]='\0';
    }
    printf("After deleting vowels=%s",s);
}
