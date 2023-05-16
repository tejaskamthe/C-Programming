#include<stdio.h>
int swapping(int *a,int *b);
int main()
{
    int n,m;
    printf("Enter The 2 values:\n");
    scanf("%d%d",&n,&m);
    printf("NO.1=%d \t NO.2=%d\n",n,m);
    swapping(&n,&m);
    printf("After Swapping:\n");
    printf("NO.1=%d \t NO.2=%d",n,m);
}
int swapping(int *a,int *b)
{
int temp;
temp=*a;
*a=*b;
*b=temp;
}
