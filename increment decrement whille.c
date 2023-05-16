#include<stdio.h>
int main()
{
    int a,b,i;
    printf("Enter The Limit:");
    scanf("%d",&a);
    printf("Enter The Initial:");
    scanf("%d",&b);
    for(i=b;i<=a;i++)
    {
        printf("%d \n",i);
    }
}
