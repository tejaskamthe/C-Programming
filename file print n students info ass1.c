#include<stdio.h>
int main()
{
    FILE *fp;
    int id,i,n,mob;
    char name[30];
    fp=fopen("b.txt","w");
    printf("Enter How Many Students Info You Want:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("Enter The ID,Stud Name,Mobile: ");
        scanf("%d%s%d",&id,&name,&mob);
        fprintf(fp,"\nID:- %d \t Name:- %s \t Mobile:-%d",id,name,mob);
    }
    fclose(fp);
}
