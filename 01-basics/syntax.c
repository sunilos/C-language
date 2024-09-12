#include <stdio.h>

/**
 * @brief The main function demonstrates basic variable initialization and printing in C.
 * 
 * This function initializes an integer variable with a value and uses the printf function
 * to display the value on the console.
 * 
 * @return int Returns 0 to indicate successful execution.
 */
int main() {
    int number = 10;  /**< Integer variable initialized to the value 10. */

    // Prints the value of the integer variable 'number' using the %d format specifier
    printf("Number: %d\n", number);

    return 0;   /**< Return 0 to indicate that the program executed successfully. */
}
