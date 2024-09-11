#include <stdio.h>  // Includes the standard input-output library for input-output functions

int main() {  // Main function where the program execution starts
    int number = 10;  // Declares an integer variable 'number' and assigns it the value 10

    // Checks if the 'number' is greater than 0
    if (number > 0) {
        // If the condition is true (number is greater than 0), this line is executed
        printf("Number is positive.\n");  // Prints "Number is positive." to the console
    } else {
        // If the condition is false (number is not greater than 0), this line is executed
        printf("Number is not positive.\n");  // Prints "Number is not positive." to the console
    }

    return 0;  // Returns 0 to indicate that the program executed successfully
}
