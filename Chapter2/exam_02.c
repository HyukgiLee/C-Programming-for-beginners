#include <stdio.h>
// for exit() function
#include <stdlib.h>

// Description:
// this program uses if statment to create a simple calculator


// helper function to select operator based on user choice 
char select_operator(int num) {
    char operator;
    if (num == 1)
        operator = '+';
    else if (num == 2)
        operator = '-';
    else if (num == 3)
        operator = '*';
    else if (num == 4)
        operator = '/';
    // if user enters invalid choice, exit the program
    else {
        printf("Invalid choice!\n");
        exit(0);
    }
    return operator;
}


// This program can actually be written in a more concise way using just if, else if, and else statements
// but i created helper function and switch statement for practice purpose. 
int main() {
    // initialize variables
    int first_num, second_num;
    int user_choice;
    int result;
    char user_operator;

    // Ask user to input two numbers and corresponding number of operator
    printf("Enter first number : ");
    scanf("%d", &first_num);
    printf("<1> Addition\n<2> Subtraction\n<3> Multiplication\n<4> Division\n");
    printf("Enter corresponding number : ");
    scanf("%d", &user_choice);
    printf("Enter second number : ");
    scanf("%d", &second_num);
    user_operator = select_operator(user_choice);

    // Perform arithmetic operation based on user choice
    switch(user_operator) {
        case '+':
            result = first_num + second_num;
            break;
        case '-':
            result = first_num - second_num;
            break;
        case '*':
            result = first_num * second_num;
            break;
        case '/':
            result = first_num / second_num;
            break;
    }
    // print the result
    printf("%d %c %d = %d\n", first_num, user_operator, second_num, result);
    return 0;

}