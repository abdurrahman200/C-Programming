#include <stdio.h>
void Password(char A[])
{
    int i,uppercase,lowercase,number,symbol;
    i = uppercase = lowercase = number = symbol = 0;
    if(strlen(A) >= 7){
        while(A[i] != '\0'){
            if(A[i] >= 65 && A[i] <= 90 )
                uppercase++;
            else if(A[i] >= 97 && A[i] <= 122 )
                lowercase++;
            else if(A[i] >= 48 && A[i] <= 57 )
                number++;
            else if(A[i] >= 33 && A[i] <= 47 && A[i] >= 57 && A[i]<=64 && A[i] >= 96 && A[i]<=96 )
                symbol++;
            else
                printf("Invalid Press \n");
            i++;
        }
        if( uppercase == 0 || lowercase == 0 || number == 0 || symbol == 0)
            printf("Invalid \n");
        else
            printf("valid Password \n");
    }
    else
        printf("Minimum Length 7 Try Again \n");
}
int main()
{
    char A[20];
    printf("Enter A Password : ");
    gets(A);
    Password(A);
}
