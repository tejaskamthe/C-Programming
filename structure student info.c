#include<stdio.h>
struct stud
{
   int sid;
   char sname[50];
   int smobile;
}s;
int main()
{
    printf("Student Name: \n");
  gets(s.sname);
  printf("Student no: \n");
  scanf("%d",&s.sid);

  printf("Student Mobile no: \n");
    scanf("%d",&s.smobile);
printf("%s\t %d\t %d",s.sname,s.sid,s.smobile);
}
