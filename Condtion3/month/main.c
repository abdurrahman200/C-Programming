#include <stdio.h>
#include <stdlib.h>
int main()
{
    while(1)
    {
        int Num;
        printf("Input Number Of Month  : ");
        scanf("%d",&Num);
        /* January = 1, February = 2, March = 3, April = 4,
            May = 5, Jun = 6, July = 7, August = 8, September=9,
            October =10, November =11, December = 12;*/
        if( Num > 0 && Num <= 12)
        {
            if (Num == 1 || Num == 3 ||
                    Num == 5|| Num == 7 || Num == 8 ||
                    Num == 10 || Num == 12)
            {
                printf("31 Days \n");
            }
            else if (Num == 4 || Num == 6 ||
                     Num == 9 || Num == 11)
            {
                printf("30 Days \n");
            }
            else if (Num == 2)
            {
                printf("28/29 Day \n");
            }
            else
            {
                printf("Invalid Month \n");
            }
        }
        else
        {
            printf("Invalid Number \n");
        }
        printf("  \n");
    }
    return 0;
}
