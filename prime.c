#include<stdio.h>
int main()
{ // It's Divisible only that no. and 1 ;
    int n,i,c=0;
    printf("Enter The No:");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        if(n%i==0)
        {
         c++;
        }
    }
        if(c==2)
        {
            printf("Prime no:");
        }
        else
            printf("Not a prime No:");
    return 0;
}
