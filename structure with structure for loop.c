#include<stdio.h>
struct emp
{
    int no;
    char f_name[20],l_name[20];

    struct day
    {
        int day,month,year;

    }d[50];
};
int main()
{
    struct emp e[20];
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter The Emp Info No,F_Name,L_Name,Day,Month,Year:\n");
        scanf("%d%s%s%d%d%d",&e[i].no,&e[i].f_name,&e[i].l_name,&e[i].d[i].day,&e[i].d[i].month,&e[i].d[i].year);
    }
    printf("Employee Info Is :");
    for(i=0;i<2;i++)
    {
        printf("\n%d\n%s\n%s\n%d-%d-%d",e[i].no,e[i].f_name,e[i].l_name,e[i].d[i].day,e[i].d[i].month,e[i].d[i].year);
    }
    return 0;
}
