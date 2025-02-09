#include <stdio.h>


// this program asks user to input four integers and calculates their sum
int main() {
    // initialize variables
    int a, b, c, d;
    int result;

    // Takes four inputs from user
    printf("Enter four numbers : (num1 num2 num3 num4)");
    scanf("%d %d %d %d", &a, &b, &c, &d);
    // calculate sum of four numbers and prints it
    result = a + b + c + d;
    printf("The sum of %d, %d, %d, and %d is %d\n", a, b, c, d, result);
}