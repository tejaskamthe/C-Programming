#include<stdio.h>
typedef struct student
{
    int sno;
    char sname[5];
}st;
int main()
{
    st s1;
    printf("Enter No:\n");
    scanf("%d",&s1.sno);
    printf("Enter name :\ns");
    scanf("%s",&s1.sname);
    printf("%d \t %s\n",s1.sno,s1.sname);

}
