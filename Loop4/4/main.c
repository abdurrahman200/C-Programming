#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum= 0,rem;
    printf("Enter an Integer : ");
    scanf("%d",&n);

    i = n;

    while( i != 0)
    {
        rem = i % 10;
        sum = sum + rem;
        i = i / 10;
    }
    printf("Sum of digits of %d = %d\n", n, sum);

    return 0;
}
