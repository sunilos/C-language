```c
#include <stdio.h>

int main() {
    int number = 10;
    printf("Number: %d\n", number);
    return 0;
}
```

```c
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
```

- The program includes the `stdio.h` library, which provides access to standard input and output functions such as `printf`.
- The `main` function serves as the entry point for the program execution.
- An integer variable `number` is declared and initialized with a value of `10`.
- The `printf` function is used to print the value of `number`, utilizing the `%d` format specifier for integers.
- The program returns `0` to signal successful execution.
- The comment block at the top provides a brief description of the function and its return value, improving code documentation.
- A single-line comment is placed before the `printf` function to clarify its purpose.
- The `%d` format specifier ensures that the integer value of `number` is printed correctly on the console.
- The `return 0;` indicates that the program has completed without errors.
- Commenting conventions, such as multi-line and single-line comments, help improve code readability and maintenance.
