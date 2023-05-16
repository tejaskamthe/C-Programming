#include<stdio.h>
int main()
{
    int a,b,c,d=1,i=1;
    printf("enter the three numbers \n");
    scanf("%d%d%d",&a,&b,&c);
    while(i<=a && i<=b && i<=c)
    {
        if(a%i==0 && b%i==0 && c%i==0)
        {
            d=i;
        }
        i++;
    }
    printf("GCD of Three no= %d",d);
}
