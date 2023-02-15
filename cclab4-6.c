#include<stdio.h>
#include<math.h>
int main()
{
    int n,N,count=0;
    unsigned long i=1;
    printf("******Print Taxicab numbers******\n\n");
    printf("Enter the number of distinct ways (keep it <=2): ");
    scanf("%d",&n);
    printf("Enter the number of taxicab numbers you want to print: ");
    scanf("%d",&N);

    while(count<N){
        int int_count=0;

        for (unsigned long j = 1; j <= pow(i,1.0/3); j++)
           for (unsigned long k = j + 1; k <= pow(i, 1.0/3); k++)
                if (j*j*j + k*k*k == i)
                    int_count++;

        if (int_count == n)
        {
            count++;
            printf("count %d number %lu\n",count,i);

        }
        i++;
    }
    return 0;
}
