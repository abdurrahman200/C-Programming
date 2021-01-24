#include <stdio.h>
#include <stdlib.h>
int main()
{
    char op;
    printf("Enter operators ( +,-,*,/ ): ");
    scanf("%c",&op);
    if( op == '+' || op == '-' || op == '*' || op == '/')
    {
        float a,b,c;
        printf("Enter Operand 1 : ");
        scanf("%f",&a);
        printf("Enter Operand 2 : ");
        scanf("%f",&b);
        if(op == '+')
        {
            c =  a + b;
            printf(" Add is : %.2f\n",c);
        }
        else if(op == '-')
        {
            c =  a - b;
            printf(" Sub is : %.2f\n",c);
        }
        else if(op == '*')
        {
            c =  a * b;
            printf(" Mul is : %f.2\n",c);
        }
        else if(op == '/')
        {
            c = (float) a / b;
            printf(" Div is : %.2f\n",c);
        }
        else
        {
            printf("Enter A valid character Again ");
        }
    }
    else
    {
        printf("Invalid\n");
    }
    return 0;
}
