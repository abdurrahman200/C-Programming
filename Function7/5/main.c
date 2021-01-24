#include <stdio.h>

int Fibonacci(int range)
{
   int a=0, b=1, c;

   while (a<=range)
   {
     printf(" %d ", a);
     c = a + b;
     a = b ;
     b = c ;
   }
    printf(" \n ");
}
int main()
{
    int range;

    printf("Enter range : ");
    scanf("%d",&range);
    Fibonacci(range);
}
