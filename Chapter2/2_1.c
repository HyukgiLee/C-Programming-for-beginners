#include <stdio.h>

int main() {
    // initialize variables
    int a, b;
    float result;

    // assign values to variables
    a = 100;
    b = 50;

    result = a + b;
    printf("%d + %d = %f\n", a, b, result);

    result = a - b;
    printf("%d - %d = %f\n", a, b, result);

    result = a * b;
    printf("%d * %d = %f\n", a, b, result);

    result = a / b;
    printf("%d / %d = %f\n", a, b, result);

    result = a % b;
    printf("%d %% %d = %f\n", a, b, result);


}