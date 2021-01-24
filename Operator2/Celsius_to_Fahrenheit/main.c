#include <stdio.h>
#include <stdlib.h>

int main()
{
    float celsius,fahrenheit;

    printf("Please Enter Temperature in Celcius : ");
    scanf("%f",&celsius);

    printf("\n");

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit \n", celsius, fahrenheit);

    return 0;
}
