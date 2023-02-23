#include<stdio.h>
int main()
{
    int num,NUM;
    int linecount;
    printf("Enter a integer between 1 and 50: ");
    scanf("%d",&num);
    NUM=num/2;
     if (num>50)
     num=50;
     linecount=0;
     while(num>0 && num>NUM)
     {
         if (linecount<10)
         linecount++;
         else
         {
             printf("\n");
             linecount=1;
         }
         printf("%3d",num--);
     }
    return 0;
}

