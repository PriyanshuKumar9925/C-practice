#include<stdio.h>

int main(){
    int a;
    int b;
    printf("Enter the value of a: ");
    scanf("%d", &a);
    printf("Enter the value of b: ");
    scanf("%d", &b);

    int sum = a + b;
    printf("The sum of a and b is: %d\n", sum);
    int subtraction = a - b;
    printf("The subtraction of a and b is: %d\n", subtraction);
    int multiplication = a * b;
    printf("The multiplication of a and b is: %d\n", multiplication);
    int division = a / b;
    printf("The division of a and b is: %d\n", division);
    int modulus = a % b;
    printf("The modulus of a and b is: %d\n", modulus);

    return 0;
}

//The precedence of arithmetic operators in C is as follows:
//1. Parentheses ()
//2. Multiplication (*), Division (/), and Modulus (%)
//3. Addition (+) and Subtraction (-)
//The associativity of arithmetic operators in C is as follows:
// Left to Right for Addition (+), Subtraction (-), Multiplication (*), Division (/), and Modulus (%)