#include<stdio.h>
struct emp
{
    int eno;
    char ename[30];
    float esalary;
}e;
int main()
{

    //printf("Employee Info:%d\t %s\t %f",e.eno,e.ename,e.esalary);
    printf("Eno:");
    scanf("%d",&e.eno);
    printf("Emp Name:" );
    scanf("%s",&e.ename);
    printf("Emp Salary:");
    scanf("%f",&e.esalary);
    printf("Employee Info:%d\t%s\t%f ",e.eno,e.ename,e.esalary);
return 0;

}
