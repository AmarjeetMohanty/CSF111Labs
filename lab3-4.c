/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{ 
char op;
float num1,num2;

printf("Enter operator either + or - or * or /:");
scanf("%c", &op);

printf("Enter two operand:");
scanf("%f",&num1);
scanf("%f",&num2);
   if(op=='+')
    printf("result: %f",num1+num2);
    else if(op=='-')
    printf("result: %f",num1-num2);
    else if(op=='*')
    printf("result: %f",num1*num2);
    else if(op=='/')
    printf("result: %f",num1/num2);
    return 0;
    }

