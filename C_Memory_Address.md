Here’s the C code with concise comments and a brief explanation, following the same format:

```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

int main() {  // Main function where the program execution starts
    int number = 10;  // Declares an integer variable 'number' and assigns the value 10

    // Prints the memory address of 'number' using %p format specifier for pointers
    printf("Address of number: %p\n", (void*)&number);  // (void*)&number retrieves the address of 'number'

    return 0;  // Returns 0, indicating successful program execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the library for input-output operations.

2. **`int main()`**: The main function where execution begins.

3. **`int number = 10;`**: Declares and initializes an integer variable `number`.

4. **`printf("Address of number: %p\n", (void*)&number);`**: Prints the memory address of `number`. The `(void*)` cast is used to match the `%p` format specifier.

5. **`return 0;`**: Indicates that the program has executed successfully.
