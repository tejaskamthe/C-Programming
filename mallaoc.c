#include<stdio.h>
#include<stdlib.h>
int main()
{
    int *i;
    char *c;
    float *f;
    i=(void*)malloc(sizeof(int));
    c=(void*)malloc(sizeof(char));
    f=(void*)malloc(sizeof(float));
    printf("Enter The value for int:\n");
    scanf("%d",i);
    printf("Enter The value for char:\n");
    scanf("%s",c);
    printf("Enter The value for float:\n");
    scanf("%f",f);
    printf("The Value Stored in integer Pointer is:%d\n",*i);
    printf("The Value Stored in char Pointer is:%c\n",*c);
    printf("The Value Stored in float Pointer is:%f\n",*f);
    free(i);
    free(c);
    free(f);
    return 0;
}
