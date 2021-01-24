#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int numberOne,numberTwo;
        printf("Enter Number 1 : ");
        scanf("%d",&numberOne);
        printf("Enter Number 2 : ");
        scanf("%d",&numberTwo);

        printf("\n");

        if(numberOne > numberTwo)
        {
            printf("Miximum number : %d\n",numberOne);
        }
        else if(numberOne < numberTwo)
        {
            printf("Miximum number  Is : %d\n",numberTwo);
        }
        else
        {
            printf("Numbers Are Equal \n");
        }
        printf("\n");
    }
    return 0;
}
