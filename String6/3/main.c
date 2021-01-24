#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    char A[] = "C Programming";
    int i;

    for (i = 0; A[i] != '\0'; ++i);

    printf("Length of the string: %d \n", i);

    return 0;
}
