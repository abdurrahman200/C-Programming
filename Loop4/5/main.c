#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, rem = 0;

    printf("Enter a number to reverse : ");
    scanf("%d", &n);

    while (n != 0)
    {
        rem = rem * 10;
        rem = rem + n % 10;
        n = n / 10;
    }

    printf("Reverse number = %d\n", rem);

    return 0;
}
