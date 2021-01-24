#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[100], B[100], i;

    printf("Enter string s1: ");
    fgets(A, sizeof(A), stdin);

    for (i = 0; A[i] != '\0'; ++i) {
        B[i] = A[i];
    }

    B[i] = '\0';
    printf("String s2: %s", B);

    return 0;
}
