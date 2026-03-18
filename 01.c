// Simple calculator by using the AI
#include <stdio.h>

int main() 
{
    char operator;
    double num1, num2, result;

    printf("Enter operation (+-addition, --subtraction, *-multipltion, /-division): "); // Chose of operation like add,sub,mul,div
    scanf("%c", &operator);

    printf("Enter two numbers: ");  // number to input
    scanf("%lf %lf", &num1, &num2);

    switch(operator) {
        case '+': // Addition case
            result = num1 + num2;
            printf("%.2lf + %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '-': // subtraction case 
            result = num1 - num2;
            printf("%.2lf - %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '*': // multiplication case
            result = num1 * num2;
            printf("%.2lf * %.2lf = %.2lf\n", num1, num2, result);
            break;
        case '/': // division case
            if(num2 != 0) {
                result = num1 / num2;
                printf("%.2lf / %.2lf = %.2lf\n", num1, num2, result);
            } else {
                printf("Error! Division by zero is not allowed.\n"); // if the input is 0 then it shows the error
            }
            break;
        default:
            printf("Invalid operator '%c'\n", operator); // if you doesn't input the operator it shows invalid operator 
    }

    return 0;
}
