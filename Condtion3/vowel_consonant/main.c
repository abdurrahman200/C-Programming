#include <stdio.h>
#include <stdlib.h>

int main()
{

    char ch,lv,uv;

    printf("Enter A Alphabet : ");
    scanf("%c",&ch);

    lv = (ch == 'a' || ch == 'e' ||
          ch == 'i' || ch == 'o' || ch == 'u');
    uv = (ch == 'A' || ch == 'E'
          || ch == 'I' || ch == 'O' || ch == 'U');

    if( uv||lv )
    {
        printf("This Is Vowel \n");
    }
    else
    {
        printf("This Is Consonant \n");
    }
    return 0;
}
