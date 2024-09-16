### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int number = 10;

    if (number > 0) {
        printf("Number is positive.\n");
    } else {
        printf("Number is not positive.\n");
    }

    return 0;
}
```

### **2. Code with comments and explanations:**
```c
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
```

### Explanation

- The `#include <stdio.h>` directive includes the Standard I/O library, which provides the `printf` function for displaying output to the console.
- The `main` function is where the program execution begins.
- An integer variable `number` is declared and initialized with the value `10`.
- The `if` statement checks whether `number` is greater than `0`. If true, it executes the first `printf` statement.
- If `number` is not greater than `0`, the `else` block executes and prints a different message.
- The program ends with `return 0;`, indicating successful execution and returning control to the operating system.
