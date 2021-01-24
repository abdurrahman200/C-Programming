#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,A[10];

    printf("Enter Any Number to Convert: ");
    scanf("%d",&n);

    for(i = 0; n > 0; i++)
    {
        A[i] = n % 2;
        n = n / 2;
    }
    printf("\nBinary of Given Number is = ");
    for( i = i - 1 ; i >= 0 ; i--)
    {
        printf("%d",A[i]);
    }
    printf("\n");

    return 0;
}
