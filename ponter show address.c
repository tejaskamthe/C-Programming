#include<stdio.h>
main()
{
    int a=100;
    int *p1;
    p1=&a;
    printf(" values of a=%d\n",a);
    printf(" address of a=%u",&a);
    printf("\n Pointer Values= %u",p1);
    printf("\n Pointer=%u",*p1);
}
