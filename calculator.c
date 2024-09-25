#include <stdio.h>

int addition(int first_number, int second_number);
int subtraction(int first_number, int second_number);
int multiplication(int first_number, int second_number);
int division(int first_number, int second_number);
void display_answer(int result, int first_number, int second_number, char operation);
int calculation(int first_number, int second_number, char operation);

int main(void){

    int first_number;
    int second_number;
    char operation;
    int result;

    printf("Enter two numbers: \n");
    scanf(" %i,%i",&first_number,&second_number);


    printf("Now enter the operation (+,-,*,/): \n");
    scanf(" %c",&operation);


    result = calculation(first_number,second_number,operation);

    display_answer(result, first_number, second_number, operation);

}

int addition(int first_number,int second_number){
    return first_number + second_number;
}

int subtraction(int first_number, int second_number){
    return first_number - second_number;
}

int multiplication(int first_number, int second_number){
    return first_number * second_number;
}

int division(int first_number, int second_number){
    if (second_number == 0){
        return 0;
    }
    else{
        return first_number / second_number;
    }
}

int calculation(int first_number, int second_number, char operation){
    int result;
    switch (operation){
        case '+':
            result = addition(first_number,second_number);
            break;
        case '-':
            result = subtraction(first_number,second_number);
            break;
        case '*':
            result = multiplication(first_number,second_number);
            break;
        case '/':
            result = division(first_number,second_number);
            break;
        default:
            printf("Invalid Operation");
            return 0;

    return result;
}
}

void display_answer(int result, int first_number, int second_number, char operation){
    switch (operation){
        case '+':
            printf("%i + %i = %i",first_number,second_number,result);
            break;
        case '-':
            printf("%i - %i = %i",first_number,second_number,result);
            break;
        case '*':
            result = multiplication(first_number,second_number);
            printf("%i x %i = %i",first_number,second_number,result);
            break;
        case '/':
            printf("%i / %i = %i", first_number, second_number, result);
            break;
        default:
            printf("Invalid Operation");
}
}