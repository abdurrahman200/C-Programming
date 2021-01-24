#include <stdio.h>
#include <stdlib.h>

int main()
{
    float length,area;
    printf("Please Enter Length of one side : ");
    scanf("%f",&length);

    area = length*length;

    printf("Area of Square = %.2f\n", area);

    return 0;
}
