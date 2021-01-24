#include <stdio.h>
#include <stdlib.h>

int main()
{
    float height,width,area;
    printf("Please Enter height : ");
    scanf("%f",&height);

    printf("Please Enter width : ");
    scanf("%f",&width);

    printf("\n");

    area = height * width;
    printf("Area of rectangle = %.2f\n", area);

    return 0;
}
