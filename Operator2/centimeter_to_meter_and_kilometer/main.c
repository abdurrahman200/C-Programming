#include <stdio.h>
#include <stdlib.h>

int main()
{
    float centimeter,meter,kilometer;

    printf("Please Enter Lenght in Centimeter :");
    scanf("%f.2",&centimeter);
    printf("\n");

    meter = centimeter/100;
    printf("Lengths in Meter = %.2f m \n",meter);

    kilometer = centimeter/100000;
    printf("Length in Kilometer = %.2f km\n",kilometer);

    return 0;
}
