#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int number;

        printf("Enter a Number :");
        scanf("%d",&number);

        printf("\n");
        if(number %2 == 0)
        {
            printf("%d Number is Evant\n",number);
        }
        else
        {
            printf("%d Number is Odd\n",number);
        }
        printf("\n");
    }

    return 0;
}
