#include <stdio.h>
#include <stdlib.h>

int DecimalToBinary(int n)
{
    int binaryNum[n];
    int i = 0;
    while (n > 0)
    {
        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    printf("Convert To Binary : ");
    for (int j = i - 1; j >= 0; j--)
    {
        printf("%d",binaryNum[j]);
    }
    printf("\n");
}
int main()
{
    int n;
    printf("Enter Decimal : ");
    scanf("%d",&n);
    DecimalToBinary(n);
}
