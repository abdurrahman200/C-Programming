#include<stdio.h>
#include <math.h>
int main() {

   int radius;
   float area, ci;

   printf("Enter radius of circle: ");
   scanf("%d",&radius);

   printf("\n");

   area = M_PI * radius * radius;
   printf("Area of circle : %.2f\n",area);

   ci = 2 * M_PI * radius;
   printf("Circumference : %.2f \n",ci);

   return 0;
}
