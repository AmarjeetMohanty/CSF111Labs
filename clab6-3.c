#include<stdio.h>
int main()
{
 int x;
 int sum=0;

    printf("Enter the numbers : <EOF> to stop\n");
    while (scanf("%d\n",&x) != EOF)
         sum += x;
    printf("\nTotal is: %d\n",sum);
    return 0;
    }
