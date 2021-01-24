#include <stdio.h>
#include <string.h>
int main() {
    char A[1000], ch;
    int count = 0;

    printf("Enter a string: ");
    fgets(A, sizeof(A), stdin);

    printf("Enter a character to find its frequency: ");
    scanf("%c", &ch);

    for (int i = 0; A[i] != '\0'; ++i) {
        if (ch == A[i])
            ++count;
    }
    printf("Frequency of %c = %d \n", ch, count);

    return 0;
}
