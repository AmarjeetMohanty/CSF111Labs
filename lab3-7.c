/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
	float length,breadth,perimeter;
	
	printf("enter length of rectangle: ");
	scanf("%f",&length);
	
	
	printf("enter breadth of rectangle: ");
	scanf("%f",&breadth);
 
	perimeter=2*(length+breadth);
	printf("PERIMETER: %f\n",perimeter);
	return 0;
}