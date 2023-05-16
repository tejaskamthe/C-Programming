#include<stdio.h>
void main()
{
    sum();
    printf("Hello World \n");
    sub();
}

void sum()
{
    int a,b;
    printf("Enter The 2 No for addition:");
    scanf("%d%d",&a,&b);
    printf("Addition : %d\n",a+b);
}
void sub()
{
    int a,b;
    printf("Enter The 2 No for subtraction:");
    scanf("%d%d",&a,&b);
    printf("Addition : %d\n",a-b);
}

