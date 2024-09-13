Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

int main() {  // Main function where execution starts
    int number = 10;  // Declares an integer variable 'number' and initializes it with 10

    // Checks if 'number' is greater than 0
    if (number > 0) {
        // Prints "Number is positive." if 'number' is greater than 0
        printf("Number is positive.\n");  
    } else {
        // Prints "Number is not positive." if 'number' is 0 or less
        printf("Number is not positive.\n");  
    }

    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the library for input-output operations, like `printf`.

2. **`int main()`**: Main function where the program execution begins.

3. **`int number = 10;`**: Declares an integer variable `number` and sets it to 10.

4. **`if (number > 0)`**: Checks if `number` is greater than 0.

5. **`printf("Number is positive.\n");`**: Executes if the condition is true (i.e., `number` is positive).

6. **`printf("Number is not positive.\n");`**: Executes if the condition is false (i.e., `number` is 0 or less).

7. **`return 0;`**: Indicates successful program execution.
