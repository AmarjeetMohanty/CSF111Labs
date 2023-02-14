/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>

int main()  {
    double num1,num2,num3,num4,num5;
    printf("Enter marks of subject 1:");
    scanf("%lf",&num1);
    printf("Enter marks of subject 2:");
    scanf("%lf",&num2);
    printf("Enter marks of subject 3:");
    scanf("%lf",&num3);
    printf("Enter marks of subject 4:");
    scanf("%lf",&num4);
    printf("Enter marks of subject 5:");
    scanf("%lf",&num5);
     if(((num1+num2+num3+num4+num5)/5)>=75)
        printf("pass");
   else
        printf("fail");
        }