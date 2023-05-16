#include<stdio.h>

int main()
{
    int a=50,*p1;
    float b=4.50,*p2;
    char c='c',*p3;
    p1=&a;
    p2=&b;
    p3=&c;
    printf("values a=%d\t b=%f\t c=%c \n",a,b,c);
    printf("address a=%u\t b=%u\t,c=%u\n",&a,&b,&c);
    printf("Pointer Values=%d\n",*p1);
    printf("Pointer Values=%f\n",*p2);
    printf("Pointer Values=%c\n\n",*p3);

}
//int pointer()

