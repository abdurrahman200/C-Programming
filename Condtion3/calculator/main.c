#include <stdio.h>
#include <stdlib.h>

int main()
{
    char o;
    printf("Enter An Operator (+,-,*,/) : ");
    scanf("%c",&o);
    if(o == '+' || o == '-' || o == '*' || o == '/')
    {
        double a,b;
        printf("Enter  Operand 1 : ");
        scanf("%lf",&a);
        printf("Enter  Operand 2 : ");
        scanf("%lf",&b);
        switch(o)
        {
        case '+' :
        {
            printf(" %.2lf + %.2lf = %.2lf\n",a,b,a+b);
            break;
        }
        case '-' :
        {
            printf(" %.2lf - %.2lf = %.2lf\n",a,b,a-b);
            break;
        }
        case '*' :
            printf(" %.2lf * %.2lf = %.2lf\n",a,b,a*b);
            break;
        case '/' :
        {
            printf(" %.2lf / %.2lf = %.2lf\n",a,b,a/b);
            break;
        }
        default:
            printf("Invalid Charecter");
        }
    }
    else
    {
        printf("Invalid Operator");
    }
    return 0;
}
