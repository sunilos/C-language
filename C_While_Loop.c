#include <stdio.h>

/**
 * @brief The main function demonstrates the use of a while loop in C.
 * 
 * This function uses a while loop to print the value of the integer variable 'i' from 0 to 4.
 * The loop continues until the condition `i < 5` is no longer true.
 * 
 * @return int Returns 0 to indicate successful execution.
 */
int main() {
    int i = 0;  /**< Integer variable initialized to 0. */

    // While loop to print the value of 'i' as long as 'i' is less than 5
    while (i < 5) {
        printf("i: %d\n", i);  /**< Print the current value of 'i'. */
        i++;                   /**< Increment 'i' by 1 after each iteration. */
    }

    return 0;   /**< Return 0 to indicate successful execution. */
}
