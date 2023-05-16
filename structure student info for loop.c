#include<stdio.h>
struct stud
{
    int id;
    char name[50],add[500];
}s[10];
int main()
{
    int i;
    for(i=0;i<2;i++)
    {
        printf("Enter Student ID:\n");
        scanf("%d",&s[i].id);
        printf("Student Nanme:\n");
        scanf("%s",&s[i].name);
        printf("Student Adress:\n");
        scanf("%s",&s[i].add);

    }
    for(i=0;i<2;i++)
    {
        printf("%d\t%s\t%s",s[i].id,s[i].name,s[i].add);
    }
}
