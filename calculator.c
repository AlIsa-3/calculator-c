#include <stdio.h>


// Calculation Functions
double addition(double first_number, double second_number);
double subtraction(double first_number, double second_number);
double multiplication(double first_number, double second_number);
double division(double first_number, double second_number);
double exponentiation(double base, double exponent);


void display_answer(double result, double first_number, double second_number, char operation);
double calculation(double first_number, double second_number, char operation);

int main(void){

    double first_number;
    double second_number;
    char operation;
    double result;

    printf("Enter two numbers: \n");
    scanf(" %lf,%lf",&first_number,&second_number);

    printf("Now enter the operation (+,-,*,/,^ (exponentiation)): \n");
    scanf(" %c",&operation);

    result = calculation(first_number,second_number,operation);

    display_answer(result, first_number, second_number, operation);

}

double addition(double first_number,double second_number){
    return first_number + second_number;
}

double subtraction(double first_number, double second_number){
    return first_number - second_number;
}

double multiplication(double first_number, double second_number){
    return first_number * second_number;
}

double division(double first_number, double second_number){
    if (second_number == 0){
        return 0;
    }
    else{
        return first_number / second_number;
    }
}

double exponentiation(double base, double exponent){

    double result = 1;

    // Exponentiation is repeated multiplication

    for(int i=exponent;i>0;i--){
        result *= base;
    }
    return result;
}



double calculation(double first_number, double second_number, char operation){
    double result;
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
        case '^':
            result = exponentiation(first_number,second_number);
        default:
            printf("Invalid Operation");
            return 0;

    return result;
}
}

void display_answer(double result, double first_number, double second_number, char operation){
    switch (operation){
        case '+':
            printf("%lf + %lf = %lf",first_number,second_number,result);
            break;
        case '-':
            printf("%lf - %lf = %lf",first_number,second_number,result);
            break;
        case '*':
            printf("%lf x %lf = %lf",first_number,second_number,result);
            break;
        case '/':
            printf("%lf / %lf = %lf", first_number, second_number, result);
            break;
        case '^': 
            printf("%lf ^ %lf = %lf", first_number,second_number,result);
        default:
            printf("Invalid Operation");
}
}