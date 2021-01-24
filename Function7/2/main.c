#include <stdio.h>
int NaturalNumbers(int n) {
    if (n != 0)
        return n + NaturalNumbers(n - 1);
    else
        return n;
}
int main()
 {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    printf("Sum = %d", NaturalNumbers(n));
}

