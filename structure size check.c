#include<stdio.h>
int main()
{
    union student
    {
    int sno;
    float fees;
    double no;
    char name[14];
    };
    struct student1
    {
        int no;
        float fees;
        char name[14];
    };
union student s;
struct student1 t;
s.sno=1;
printf("roll no=%d\n",s.sno);
s.fees=500.40;
printf("fees=%f\n",s.fees);
s.name[14]="tejas";
printf("name=%s\n",s.name);
s.no=15351546.215;
printf("number=%f\n",s.no);

printf("\n Size of sno=%d",sizeof(int));
printf("\n Size of fees=%d",sizeof(float));
printf("\n Size of name=%d",sizeof(char));
printf("\n Size of number=%d",sizeof(double));
printf("\n Size of structure=%d",sizeof(s));
printf("\n Size of union=%d",sizeof(t));
return 0;
}

