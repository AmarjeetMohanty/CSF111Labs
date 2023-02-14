/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
#include<math.h>

void main()
{
float a,b,c,root1,root2;
printf("Enter values of a,b,c for fiding roos of quadratic equation:");
scanf("%f%f%f",&a,&b,&c);
if(b*b>=4*a*c)
{
 root1=(-b+sqrt(b*b-4*a*c))/2*a;
 root2=(-b-sqrt(b*b-4*a*c))/2*a;
 printf("root1= %f\nroot2= %f\n",root1,root2);
 }
 else 
 printf("\n Imaginary roots");
 
 }
