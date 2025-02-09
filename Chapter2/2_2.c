#include <stdio.h>

/* This program asks user to input two integers than perform addition, 
   subtraction, multiplication, division, and modulo operations on them.
*/

int main() {

    // initialize variables
    int a, b;
    int result;

    // Takes two input from user
    printf("Enter first number : ");
    scanf("%d", &a);
    printf("Enter second number : ");
    scanf("%d", &b);

    // Perform four fundamental arithmetic operations + modulo
    result = a + b;
    printf("%d + %d = %d\n", a, b, result);
    result = a - b;
    printf("%d - %d = %d\n", a, b, result);
    result = a * b;
    printf("%d * %d = %d\n", a, b, result);
    result = a / b;
    printf("%d / %d = %d\n", a ,b ,result);
    result = a % b;
    printf("%d %% %d = %d\n", a, b, result);

    return 0;
}