### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int a = 10, b = 20;
    int sum = a + b;
    printf("Sum: %d\n", sum);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

int main() {  // Main function where the program execution starts
    int a = 10, b = 20;  // Declares two integer variables 'a' and 'b', assigns them the values 10 and 20 respectively
    int sum = a + b;  // Declares an integer variable 'sum' and stores the result of 'a + b'

    // Prints the value of 'sum' using the %d format specifier for integers
    printf("Sum: %d\n", sum);  // Outputs the result of 'a + b' to the console

    return 0;  // Returns 0, indicating successful program execution
}
```

### Explanation

- The `#include <stdio.h>` directive includes the Standard I/O library, which provides functions such as `printf` for output operations.
- The `main` function serves as the entry point for the program. It starts execution from here.
- Two integer variables, `a` and `b`, are declared and initialized with the values `10` and `20`, respectively.
- An integer variable `sum` is declared to store the result of adding `a` and `b`.
- The `printf` function prints the value of `sum` to the console. The `%d` format specifier is used to display the integer value of `sum`.
- The program ends with `return 0;`, which indicates that the program executed successfully and returns control to the operating system.
