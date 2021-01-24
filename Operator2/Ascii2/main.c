#include <stdio.h>
#include <stdlib.h>

int main()
{
    char character,numberOfcharacter;

    printf("Please Enter A capital letter : ");
    scanf("%c",&character);

    int number,np,cp;

    printf("Enter A  Number : ");
    scanf("%d",&number);

    cp = character - 'A';

    np = (cp + number) % 26;

    numberOfcharacter = np + 'A';

    printf("Letter is : %c\n",numberOfcharacter);
    return 0;
}
