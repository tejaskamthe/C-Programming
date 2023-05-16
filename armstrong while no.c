#include<stdio.h>
int main()
{ // armstrong no=153 ---> 1*1*1 + 5*5*5 + 3*3*3 = 153;
    int n,c,p,arm;
    printf("Enter The no :");
    scanf("%d",&n);
    c=n;
    while(n>0)
    {
        p=n%10;
        arm=(p*p*p)+arm;
        n=n/10;
    }
if(arm==c)
{
    printf("armstrong no.");
}
else
{
    printf("Not a Armstrong no.");
}
return 0;
}
