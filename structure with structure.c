#include<stdio.h>
struct emp
{
    int no;
    char f_name[20];
    char l_name[20];

    struct date
    {
        int day;
        int month;
        int year;
    }d;
};
int main()
{
    struct emp e;
    printf("Enter The No:\n");
    scanf("%d",&e.no);
    printf("Enter The First Name:\n");
    scanf("%s",&e.f_name);
    printf("Enter The Last Name:\n");
    scanf("%s",&e.l_name);
    printf("Enter The Day:\n");
    scanf("%d",&e.d.day);
    printf("Enter The Month:\n");
    scanf("%d",&e.d.month);
    printf("Enter The year:\n");
    scanf("%d",&e.d.year);
    printf("Employee Info:\n %d\n%s\n%s%\n%d-%d-%d",e.no,e.f_name,e.l_name,e.d.day,e.d.month,e.d.year);

    return 0;
}
