### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int number = 10;
    printf("Address of number: %p\n", &number);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

int main() {  // Main function where the program execution starts
    int number = 10;  // Declares an integer variable 'number' and assigns the value 10 to it

    // Prints the memory address of the 'number' variable using the %p format specifier for pointers
    printf("Address of number: %p\n", &number);  // &number retrieves the address of the variable 'number'

    return 0;  // Returns 0, indicating successful program execution
}
```

### Explanation:

- `#include <stdio.h>` includes the standard input-output library necessary for functions like `printf`.
- `int number = 10;` declares an integer variable named `number` and initializes it with the value `10`.
- `printf("Address of number: %p\n", &number);` uses `printf` to print the memory address of the `number` variable:
  - `%p` is the format specifier used to print a pointer (address).
  - `&number` gives the memory address of the variable `number`.
- `return 0;` indicates that the program completed successfully.
