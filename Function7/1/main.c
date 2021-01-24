#include <stdio.h>
int DisplayPrime(int n) {
    int j, Prime = 1;
    for (j = 2; j <= n / 2; ++j) {
        if (n % j == 0) {
            Prime = 0;
            break;
        }
    }
    return Prime;
}
int main() {
    int  i, n1, n2, Prime;

    printf("Enter First positive integers: ");
    scanf("%d", &n1);

    printf("Enter Second positive integers: ");
    scanf("%d", &n2);

    printf("\n");
    printf("Prime Numbers Are :", n1, n2);

    for (i = n1 + 1; i < n2; ++i) {
        Prime = DisplayPrime(i);
        if (Prime == 1)
            printf("%d ", i);
    }
    printf("\n");
    return 0;
}

