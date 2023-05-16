#include<stdio.h>
int fibo(int n);
int main()
{
    int a;
    printf("enter the Limit");
    scanf("%d",&a);
    printf("fibonacci series");
    printf(" %d ,%d",0,1);
    fibo(a-2);
}
int fibo(int n)
{
    static int a=0,b=1,c;
    if(n>0)
    {
        c=a+b;
        printf(" ,%d",c);
        a=b;
        b=c;
        fibo(n-1);
    }
}
