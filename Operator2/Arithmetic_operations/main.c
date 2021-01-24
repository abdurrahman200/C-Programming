#include <stdio.h>

int main()
{
    int  a,b,c;

    printf("Please Enter  Number One :");
    scanf("%d",&a);

    printf("Please Enter  Number Tow : ");
    scanf("%d",&b);

    printf("\n");

    c = a + b;
    printf("Addition   Number is : %d\n",c);

    c = a - b;
    printf("Subtraction    Number is : %d\n",c);

    c =  a * b;
    printf("Multiplication    Number is : %d\n",c);

    c = (float) a / b; //Type casting
    printf("Division    Number is : %d\n",c);

    c = a % b;
    printf("Remainder after division (modulo division) Number is : %d\n",c);
    return 0;
}
