#include <stdio.h>
#include <stdlib.h>

int main()
{
    char capital;
    printf("Please Enter A capital letter : ");
    scanf("%c",&capital);

    int number;
    printf("Enter A  Number : ");
    scanf("%d",&number);

    capital = toupper(capital) + number;

    printf("Capital letter is : %c\n",capital);
    return 0;
}
