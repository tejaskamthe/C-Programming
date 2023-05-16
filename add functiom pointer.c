#include<stdio.h>
float add(int *a,float *b);
int main()
{
    int a,*p1;
    p1=&a;
    float b,c;
    printf("enter the 2 values:");
    scanf("%d%f",&a,&b);
    printf("Address of a=%u\n",*p1);
    c=add(&a,&b);
    printf("Addition: %f",c);
}
float add(int *a,float *b)
{
    float c;
    c=*a+*b;

}
