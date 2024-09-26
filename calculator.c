#include <stdio.h>

struct input_variables {
    double first_number;
    double second_number;
    char operation;
};




// Calculation Functions
double addition(double first_number, double second_number);
double subtraction(double first_number, double second_number);
double multiplication(double first_number, double second_number);
double division(double first_number, double second_number);
double exponentiation(double base, double exponent);


void display_answer(double result, struct input_variables inputs);
double calculation(struct input_variables inputs);

int main(void){

    double first_number;
    double second_number;
    char operation;
    double result;

    printf("Enter your Expression: \n");
    printf("Operations are (+,-,*,/,^ (exponentiation)) \n");
    scanf(" %lf%c%lf",&first_number,&operation,&second_number);


    struct input_variables inputs = {first_number,second_number,operation};

    result = calculation(inputs);

    display_answer(result,inputs);

}

double addition(double first_number, double second_number){
    return first_number + second_number;
}

double subtraction(double first_number, double second_number){
    return  first_number - second_number;
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



double calculation(struct input_variables inputs){
    double result;
    switch (inputs.operation){
        case '+':
            result = addition(inputs.first_number,inputs.second_number);
            break;
        case '-':
            result = subtraction(inputs.first_number,inputs.second_number);
            break;
        case '*':
            result = multiplication(inputs.first_number,inputs.second_number);
            break;
        case '/':
            result = division(inputs.first_number,inputs.second_number);
            break;
        case '^':
            result = exponentiation(inputs.first_number,inputs.second_number);
            break;
        default:
            printf("Invalid Operation\n");
            result = 0;
    }

    return result;

}

void display_answer(double result,struct input_variables inputs){
    switch (inputs.operation){
        case '+':
            printf("%lf + %lf = %lf\n",inputs.first_number,inputs.second_number,result);
            break;
        case '-':
            printf("%lf - %lf = %lf\n",inputs.first_number,inputs.second_number,result);
            break;
        case '*':
            printf("%lf x %lf = %lf\n",inputs.first_number,inputs.second_number,result);
            break;
        case '/':
            printf("%lf / %lf = %lf\n", inputs.first_number, inputs.second_number, result);
            break;
        case '^': 
            printf("%lf ^ %lf = %lf\n", inputs.first_number,inputs.second_number,result);
            break;
        default:
            printf("Invalid Operation\n");
    }
}