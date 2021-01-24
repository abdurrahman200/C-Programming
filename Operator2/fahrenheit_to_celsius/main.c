#include <stdio.h>
#include <stdlib.h>

int main()
{
    float fahrenheit,celsius;
    printf("Enter temperature in Fahrenheit: ");
    scanf("%f", &fahrenheit);

    //Fahrenheit to Celsius	 C = 5/9 ( F - 32)

    celsius = 0.5555*(fahrenheit - 32);
    printf("%.2f Fahrenheit = %.2f Celsius\n", fahrenheit, celsius);

    return 0;
}
