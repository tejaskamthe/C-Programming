#include<stdio.h>
int main()
{
int a;
printf("Enter The No.");
scanf("%d",&a);
palindrome(a);
}
void palindrome(int n)
{
    int p,num,sum=0;
    num=n;
    while(n>0)
    {
        p=n%10;
        sum=(sum*10)+p;
        n=n/10;
    }
    if(num==sum)
        printf("no is palindrome no.\n");
    else
    printf("no is not palindrome no.\n");

    }
