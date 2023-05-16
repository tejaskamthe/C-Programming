#include<stdio.h>
int main()
{
    int n,p,sum=0,i;
    printf("Enter The No.");
    scanf("%d",&n);
  while(n>0)
    {
        p=n%10;
        sum=sum+p;
        n=n/10;
    }
    printf("SUM :%d",sum);
    return 0;
}
