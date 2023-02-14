/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
void main()
{
  int n,i;
  long fact;
  printf("Enter the number=");
  scanf("%d", &n);
  
  if (n==0)
   printf("Factorial of 0 is 1\n");
   else if (n<0)
   {
   printf("Cannot calculate factorial for negative input");
   }
   else
   {
   unsigned int accu = 1;
   unsigned int i;
   for(i=1; i <= n; i++)
   {
   accu *= i;
   }
   printf("factorial of %d is %u\n", n, accu);
   }
   }