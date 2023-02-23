#include<stdio.h>
int main()
{
    char c;
    scanf("%c",&c);
    int CountA=0,CountC=0;
    while(c!=EOF)
    {
        switch(c)
        {
             case 'a':
             CountA++;
             break;
              case'A':
              CountA++;
              break;
              case'c':
              CountC++;
              break;
              case'C':
              CountC++;
              break;
              default :
               printf("\n");
               break;

}
printf("A counter :%d\nC Counter=%d\n",CountA,CountC);
scanf("%c",&c);
    }
    return 0;
}

