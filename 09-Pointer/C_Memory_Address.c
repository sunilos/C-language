#include <stdio.h>  // Includes the standard input-output library for input-output functions

int main() {  // Main function where the program execution starts
    int number = 10;  // Declares an integer variable 'number' and assigns the value 10 to it

    // Prints the memory address of the 'number' variable using the %p format specifier for pointers
    printf("Address of number: %p\n", &number);  // &number retrieves the address of the variable 'number'

    return 0;  // Returns 0, indicating successful program execution
}
