#include<stdio.h>
int main() {
int i=100;
for(int i=0; i<=10; i++)
//starts from i=1 due to i++
{ i++;
//prints the odd number integers less than 12 that is 1 3 5 7 9 11 as there is a i++ command after condition
printf("%d ", i);
}
//prints the global value of i which is 100
printf("%d", i);
}
