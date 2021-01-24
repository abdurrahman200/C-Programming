#include <stdio.h>
#include <stdlib.h>
int main()
{
    char i;
    printf("Enter U Uppercase Alphabets : \n");
    printf("Enter L Lowercase  Alphabets  : \n");
    scanf("%c", &i);

    printf("\n");
    if( i == 'U' || i == 'u')
    {
        for(i='A'; i<='Z'; i++)
        {
            printf("%c\n",i);
        }
    }
    else if( i == 'L' || i == 'l')
    {
        for(i='a'; i<='z'; i++)
        {
            printf("%c\n",i);
        }
    }
    else
    {
        printf("Invalid Character \n");
    }
    return 0;
}
