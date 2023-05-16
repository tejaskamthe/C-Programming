#include<stdio.h>
int main()
{
    int a;
    printf("enetr the no:");
    scanf("%d",&a);
    armstrong(a);
}
void armstrong(int n)
{
    int p,num,sum=0;
    num=n;
    while(n>0)
    {
        p=n%10;
        sum=sum+(p*p*p);
        n=n/10;
    }
    if(num==sum)
        printf("no. is Armstrong no.");
    else
        printf("no is Not armstrong no.");

        }
