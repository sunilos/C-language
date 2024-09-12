#include <stdio.h>  // Includes the standard input-output library for input-output operations

int main() {  // Main function where program execution begins
    int myInt = 10;  // Declares an integer variable 'myInt' and assigns the value 10 to it
    float myFloat = 3.14;  // Declares a float variable 'myFloat' and assigns the value 3.14
    char myChar = 'A';  // Declares a character variable 'myChar' and assigns the value 'A'

    // Prints the values of myInt, myFloat, and myChar using format specifiers
    // %d for integers, %.2f for floats with two decimal precision, and %c for characters
    printf("Integer: %d, Float: %.2f, Char: %c\n", myInt, myFloat, myChar);

    return 0;  // Returns 0, indicating the program executed successfully
}
