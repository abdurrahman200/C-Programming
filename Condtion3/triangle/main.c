#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int angle1, angle2, angle3, sum;

        printf("Enter 1 angle of triangle: ");
        scanf("%d", &angle1);

        printf("Enter 1 angle of triangle: ");
        scanf("%d", &angle2);

        printf("Enter 1 angle of triangle: ");
        scanf("%d", &angle3);

        sum = angle1 + angle2 + angle3;

        if(sum == 180)
        {
            printf("Triangle is valid \n");
        }
        else
        {
            printf("Triangle is not valid \n");
        }
    }
    return 0;
}
