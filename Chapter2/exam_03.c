#include <stdio.h>


// Description:
// this program uses if statment to create a simple calculator
// includes exmeption for division by zero

int main() {
    int first_num, second_num;
    float result;
    char operator;

    printf("Enter first number :");
    scanf(" %d", &first_num);
    printf("+ - * / ==>");
    scanf(" %c", &operator);
    printf("Enter second number :");
    scanf(" %d", &second_num);

    if (operator == '/' && second_num == 0) {
        printf("Division by zero is not allowed!\n");
    } else {
        if (operator == '+') {
            result = first_num + second_num;
        } else if (operator == '-') {
            result = first_num - second_num;
        } else if (operator == '*') {
            result = first_num * second_num;
        } else if (operator == '/') {
            result = first_num / second_num;
        } else {
            printf("Invalid operator!\n");
        }
        printf("%d %c %d = %.1f\n", first_num, operator, second_num, result);
    }
}