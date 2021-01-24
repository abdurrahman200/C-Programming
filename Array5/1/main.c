#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,sum = 0;
    printf("How Many Number : ");
    scanf("%d",&n);

    int A[n];

    for(i = 0 ; i < n ; i++)
    {
        printf(" A[%d] = ",i+1);
        scanf("%d",&A[i]);
    }

    for(i = 0 ; i < n ; i++ )
    {
        sum  = sum + A[i];
    }
    printf("Sum =  %d \n",sum);

    float avg;

    avg = (float)sum / n ;

    printf("Average =  %.1f \n",avg);


    return 0;
}
