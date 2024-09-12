#include <stdio.h>

/**
 * @brief The main function demonstrates the use of the 'auto' keyword in C.
 * 
 * This function initializes an integer variable with the 'auto' storage class specifier
 * and prints its value. The 'auto' keyword is used to define automatic variables, which 
 * are the default storage class for local variables.
 * 
 * @return int Returns 0 to indicate successful execution.
 */
int main() {
    int autoVar = 10;  /**< Integer variable initialized to 10. The 'auto' keyword is implied here. */

    // Print the value of the variable
    printf("Value of autoVar: %d\n", autoVar);

    return 0;   /**< Return 0 to indicate successful execution. */
}
