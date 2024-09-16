### **1. Code without comments:**
```c
#include <stdio.h>

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n - 1);
}

int main() {
    int number = 5;
    printf("Factorial of %d is %d\n", number, factorial(number));
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

/**
 * @brief Calculates the factorial of a given non-negative integer using recursion.
 * 
 * This function calls itself recursively to compute the factorial of 'n'.
 * 
 * @param n The integer for which the factorial is to be computed.
 * @return int The factorial of the integer 'n'.
 */
int factorial(int n) {
    if (n == 0) return 1;  /**< Base case: the factorial of 0 is 1. */
    else return n * factorial(n - 1);  /**< Recursive case: n multiplied by the factorial of (n - 1). */
}

int main() {
    int number = 5;  /**< Integer variable initialized to 5. */

    // Calls the factorial function and prints the result
    printf("Factorial of %d is %d\n", number, factorial(number));  /**< Prints the factorial of 'number'. */

    return 0;   /**< Return 0 to indicate successful execution. */
}
```

### Explanation

- The `#include <stdio.h>` directive includes the Standard I/O library, which provides functions like `printf` for displaying output.
- The `factorial` function calculates the factorial of a given non-negative integer using recursion.
  - If `n` is `0`, the function returns `1`, which is the base case of the recursion.
  - For any other value of `n`, the function returns `n` multiplied by the factorial of `(n - 1)`, which is computed by a recursive call to `factorial`.
- The `main` function is the starting point of the program.
  - An integer variable `number` is declared and initialized to `5`.
  - The `printf` function is used to print the result of the `factorial` function, which calculates the factorial of `number`.
- The program ends with `return 0;`, indicating successful execution and returning control to the operating system.
