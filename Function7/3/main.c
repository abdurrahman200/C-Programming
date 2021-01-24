#include <stdio.h>

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return  n * fact(n - 1);
}
int main()
{
    int n1;
    scanf("%d",&n1);
    printf("Factorial  Of 5 : %d \n",fact(n1));
}
