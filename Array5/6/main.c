#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,j,nr,nc;
    printf("How Many Row ? : ");
    scanf("%d",&nr);
    printf("How Many Column ? : ");
    scanf("%d",&nc);

    int A[nr][nc], B[nr][nc], C[nr][nc], D[nr][nc];
    // take Input
    for(i = 0 ; i < nr ; i++ )
    {
        for(j = 0 ; j < nc ; j++ )
        {
            printf(" A[%d][%d] : ",i,j);
            scanf("%d",&A[i][j]);
        }
        printf("\n");
    }
    for(i = 0 ; i < nr ; i++ )
    {
        for(j = 0 ; j < nc ; j++ )
        {
            printf(" B[%d][%d] : ",i,j);
            scanf("%d",&B[i][j]);
        }
        printf("\n");
    }
    // take Output
    printf(" A : ");
    for(i = 0 ; i < nr ; i++ )
    {
        printf("\t ");
        for(j = 0 ; j < nc ; j++ )
        {
            printf(" A[%d][%d] : ",i,j);
            printf(" %d ",A[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf(" B :");
    for(i = 0 ; i < nr ; i++ )
    {
        printf("\t ");

        for(j = 0 ; j < nc ; j++ )
        {
            printf(" B[%d][%d] : ",i,j);
            printf(" %d ",B[i][j]);
        }
        printf("\n");
    }
    // Summation C
    for(i = 0 ; i < nr ; i++ )
    {
        printf("\t ");
        for(j = 0 ; j < nc ; j++ )
        {
            C[i][j] =  A[i][j] * B[i][j];
        }
        printf("\n");
    }
    printf(" C : ");
    for(i = 0 ; i < nr ; i++ )
    {
        printf("\t ");
        for(j = 0 ; j < nc ; j++ )
        {
            printf(" C[%d][%d] : ",i,j);
            printf(" %d ",C[i][j]);
        }
        printf("\n");
    }
    return 0;
}
