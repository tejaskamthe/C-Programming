#include<stdio.h>
int swap(int *x,int *y);
int main()
{
    int n,m;
    printf("Enter The 2 No. :\n");
    scanf("%d%d",&n,&m);
    printf("NO.1=%d NO.2=%d\n",n,m);
    swap(&n,&m);
    printf("After The Swapping no :\n\n");
    printf("NO.1=%d  NO.2=%d",n,m);
}
int swap(int *x,int *y)
{
    int temp;
    temp=*x;
    *x=*y;
    *y=temp;
}
