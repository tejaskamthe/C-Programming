#include<stdio.h>
//without parameter with return type
int volume(void);
int main()
{
    volume();
}
int volume(void)
{
    float h=6.5, r=3,v;
    v=3.14*r*r*h;
    printf("volume of cylinder: %f \n\n",v);
}
