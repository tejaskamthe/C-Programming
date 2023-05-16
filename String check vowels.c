#include<stdio.h>
int main()
{
    char s[100];
    int count=0,i,c=0;
    printf("enter the string \n");
    gets(s);
    //len=strlen(s);
    while(s[c] !='\0')
    {
        if( s[c] == 'a' || s[c] == 'e' || s[c] == 'i' || s[c] == 'o' || s[c] == 'u' )
            count++;
            c++;
    }
    printf("vowels No:=%d",count);
}
