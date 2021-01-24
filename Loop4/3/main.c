#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i;
    for(i=1; i<=100;i++)
    {
        if(i % 2 != 0)
        {
            printf("Odd Number Is : %d\n",i);
        }
    }
    return 0;
}
