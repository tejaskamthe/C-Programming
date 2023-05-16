#include<stdio.h>
#include<conio.h>
#include<process.h>
#include<stdlib.h>
int main(int argc,char *argv[])
{
  /*int low =atoi(argv[1]);
  int high=atoi(argv[2]);

   for(int i=low;i <= high;i++)
   printf("%d\n",i);*/
    if(argc!=6)
    {
        printf("Only Five Arguments Should Accepted..");
        exit(1);
    }
        printf("\n Program name: %s\n",argv[0]);
        printf("\n first argument: %s\n",argv[1]);
        printf("\n second argument: %s\n",argv[2]);
        printf("\n third argument: %s\n",argv[3]);
        printf("\n fourth argument: %s\n",argv[4]);
        printf("\n fifth argument: %s\n",argv[5]);

    return 0;
}
