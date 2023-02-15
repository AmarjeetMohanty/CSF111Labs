#include <stdio.h>
#include<math.h>
int main()
{
    unsigned long num;
    printf("Enter the taxicab number: ");
    scanf("%ld",&num);

    int int_count=0;
    printf("The pairs of numbers are:  ");

    for (unsigned long j=1; j<=pow(num, 1.0/3); j++){
          for(unsigned long k=j+1; k<= pow(num, 1.0/3); k++){
              if(j*j*j + k*k*k ==num)
              int_count ++;

              if(j*j*j + k*k*k == num)
               {
                   printf("(%ld,%ld) ",j,k);
               }
               }
          }
}

