#include<stdio.h>
int main()
{ //no =121 --> 121 ;
    int n,p,sum=0,num;
    printf("Enter The No:");
    scanf("%d",&n);
    num=n;
    while(n>0)
    {
        p=n%10;
        sum=(sum*10)+p;
        n=n/10;
    }
    if(sum==num)
    {
        printf("it is Palindrome no.");
    }
    else
    {
        printf("it is not Palindrome no.");
    }
    return 0;
}
