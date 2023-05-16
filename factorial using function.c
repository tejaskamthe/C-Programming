#include<stdio.h>
int fact(int n);
int main()
{
    int n,f=1;
    printf("enter the no");
    scanf("%d",&n);
    f=fact(n);
    printf("factorial: %d",f);
}
int fact(int n)
{
    if(n>0)
    {
        return (n*fact(n-1));
    }
    else
        return 1;
}
