#include <stdio.h>

int main(void){

    int first_number;
    int second_number;
    char operation;

    printf("Enter two numbers: \n");
    scanf(" %i,%i",&first_number,&second_number);


    printf("Now enter the operation (+,-): \n");
    scanf(" %c",&operation);


    switch (operation){
        case '+':
            printf("%i + %i = %i",first_number,second_number,first_number+second_number);
            break;
        case '-':
            printf("%i - %i = %i",first_number,second_number,first_number-second_number);
            break;
        default:
            printf("Invalid Operation");
    }


}
