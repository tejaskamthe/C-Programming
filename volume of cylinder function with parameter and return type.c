#include<stdio.h>
//with parameter without return type
void volume(float r,float h);
int main()
{
    volume(3,6.5);
}
void volume (float r, float h)
{
    float v;
    v=3.14*r*r*h;
    printf("volume of cylinder: %f \n",v);
}
