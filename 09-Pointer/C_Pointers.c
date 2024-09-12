#include <stdio.h>

/**
 * @brief The main function demonstrates pointer usage in C.
 * 
 * This function initializes an integer variable, assigns its address to a pointer,
 * and then prints both the pointer's address and the value it points to.
 * 
 * @return int Returns 0 to indicate successful execution.
 */
int main() {
    int number = 10;       /**< The integer variable initialized to 10. */
    int *ptr = &number;    /**< Pointer variable that stores the address of 'number'. */

    // Print the address stored in the pointer
    printf("Pointer value: %p\n", ptr);

    // Print the value at the address pointed to by 'ptr'
    printf("Pointer dereferenced value: %d\n", *ptr);

    return 0;   /**< Return 0 to indicate successful execution. */
}
