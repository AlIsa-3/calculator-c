#include <stdio.h>

int addition(int first_number, int second_number);
int subtraction(int first_number, int second_number);

int main(void){

    int first_number;
    int second_number;
    char operation;
    int result;

    printf("Enter two numbers: \n");
    scanf(" %i,%i",&first_number,&second_number);


    printf("Now enter the operation (+,-): \n");
    scanf(" %c",&operation);


    switch (operation){
        case '+':
            result = addition(first_number,second_number);
            printf("%i + %i = %i",first_number,second_number,result);
            break;
        case '-':
            result = subtraction(first_number,second_number);
            printf("%i - %i = %i",first_number,second_number,result);
            break;
        default:
            printf("Invalid Operation");
    }


}

int addition(int first_number,int second_number){
    return first_number + second_number;
}

int subtraction(int first_number, int second_number){
    return first_number - second_number;
}