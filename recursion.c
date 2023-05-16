#include<stdio.h>
#include<conio.h>
int m1(int n)
{
    if (n<=1)
        return 1;
    else
        return n*m1(n-1);
}
void main()
{
    int n,f;
    printf("Enter Any No: ");
    scanf("%d",&n);
    f=m1(n);
    printf("factorial %d",f);
    return 0;
}

