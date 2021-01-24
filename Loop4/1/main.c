#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;
    printf("Ente a Number : ");
    scanf("%d",&n);

    if(n != 0)
    {
        for(i=1; i <= n; i++)
        {
            printf("Natural Numbers %d\n",i);
        }
    }
    else
    {
        printf("Invalid");
    }

    return 0;
}
