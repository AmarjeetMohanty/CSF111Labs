/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include<stdio.h>
int main() {

double n1,n2,n3;
printf("Enter number1:");
scanf("%lf",&n1);
printf("Enter number2:");
scanf("%lf",&n2);
printf("Enter number3:");
scanf("%lf",&n3);

double max,min;
if(n1>=n2)
{
if(n1>=n3)
{
max=n1;
if(n3>=n2)
min=n2;
else 
min=n3;
}
else
{
max=n3;
min=n2;
}
}
else if(n2>=n3)
{ 
max=n2;
if(n3>=n1)
 min=n1;
 else
 min=n3;
 }
 else
 {
max=n3;
min=n1;
}
printf("Difference between Maximum and Minimum is :%0.21f",max-min);

return 0;
}
