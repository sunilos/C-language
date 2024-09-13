Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

int main() {
    int autoVar = 10;  // Integer variable initialized to 10 (auto keyword implied by default)

    // Print the value of the variable
    printf("Value of autoVar: %d\n", autoVar);

    return 0;   // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the library for input-output operations.

2. **`int autoVar = 10;`**: Initializes an integer variable `autoVar` to 10. The `auto` keyword is implied by default for local variables.

3. **`printf("Value of autoVar: %d\n", autoVar);`**: Prints the value of `autoVar`.

4. **`return 0;`**: Indicates successful completion of the program.
