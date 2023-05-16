#include<stdio.h>
int main()
{// 1234 ----> 4321;
    int n,p;
    printf("Enter The No:");
    scanf("%d",&n);
    while(n>0)
    {
        p=n%10;
        printf("%d",p);
        n=n/10;
    }
    return 0;

}
