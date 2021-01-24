#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n;

    printf("How Many Number : ");
    scanf("%d",&n);

    int A[n];
    for(i = 0 ; i < n ; i++)
    {
        printf(" A[%d] = ",i+1);
        scanf("%d",&A[i]);
    }

    int max = A[0];
    for(i = 0 ; i < n ; i++ )
    {
        if(max < A[i])
            max = A[i];
    }
    printf("\n");
    printf(" Max =  %d \n",max);

    return 0;
}
