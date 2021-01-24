#include <stdio.h>
#include <stdlib.h>

int main()
{
    while(1)
    {
        int number;
        printf("Enter a number : ");
        scanf("%d",&number);

        printf("\n");

        if(number<0)
        {
            printf("%d is Negative Number \n",number);
        }
        else if(number>0)
        {
            printf("%d is Positive Number \n",number);
        }
        else
        {
            printf("Number Is Zero \n");
        }
         printf("\n");
    }
    return 0;
}
