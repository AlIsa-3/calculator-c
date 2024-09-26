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
        
    char repeat_confirmation;
    int repeat = 1;
    int first_run_flag = 1;
    while (repeat){
        
        if (first_run_flag){
        printf("Enter your Expression: \n");
        printf("Operations are (+,-,*,/,^ (exponentiation)) \n");
        scanf(" %lf%c%lf",&first_number,&operation,&second_number);
        first_run_flag = 0;
        }
        else{
            printf("Enter your Expression: \n");
            printf("Operations are (+,-,*,/,^ (exponentiation)) \n");
            printf("%lf",first_number);
            scanf(" %c%lf",&operation,&second_number);
        }

        struct input_variables inputs = {first_number,second_number,operation};

        result = calculation(inputs);

        display_answer(result,inputs);

        //Confirmation of continuation
        printf("Continue? (Y/N): \n");
        scanf( " %c",&repeat_confirmation);
        switch(repeat_confirmation){
            case 'Y':
            case 'y':
                first_number = result;
                break;
            case 'N':
            case 'n':
                repeat = 0;
                break;
            default:
                repeat = 0;

        }
        }

    
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
    int is_negative;    // Need to get the absolute value of the exponent
    if (exponent > 0){
        is_negative = 0;
    }
    else{
        is_negative = 1;
        exponent = -exponent;
    }

    double result = 1;
    // Exponentiation is repeated multiplication

    for(int i=exponent;i>0;i--){
        result *= base;
    }

    if (is_negative){
        result = 1/result;
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