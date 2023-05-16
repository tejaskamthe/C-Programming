//
#include<stdio.h>
int gcd(int x,int y);
int main()
{
    int n1,n2,hcf,lcm;
    printf("enter the two no");
    scanf("%d%d",&n1,&n2);
    hcf=gcd(n1,n2);
    printf("hcf of given no=%d",hcf);
    lcm=(n1*n2)/hcf;
    printf("\n lcm of given no=%d",lcm);
}
int gcd(int x,int y)
{
    if(y==0)
    {
        return x;
    }
    else
    {
        return gcd(y,x%y);
    }
}
