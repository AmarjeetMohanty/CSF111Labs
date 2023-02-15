#include<stdio.h>
void main()
{
    int counter,counter1,no,check;
    printf("INPUT THE VALUE OF N:  ");
    scanf("%d",&no);
    printf("\nTHE PRIME NUMBER SERIES BETWEEN 1 TO %d\n",no);

    for(counter = 2; counter <= no; counter++)
    {
        check = 0;
        for(counter1 = counter-1; counter1 > 1 ; counter1--)
         if(counter%counter1 == 0)
         {
             check++;
             break;
         }
         if(check == 0)
          printf("%d ",counter);
    }
}
