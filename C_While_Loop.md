Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

int main() {
    int i = 0;  // Integer variable initialized to 0

    // While loop to print the value of 'i' while 'i' is less than 5
    while (i < 5) {
        printf("i: %d\n", i);  // Print the current value of 'i'
        i++;                   // Increment 'i' by 1
    }

    return 0;   // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for input-output operations.

2. **`int i = 0;`**: Initializes an integer variable `i` to 0.

3. **`while (i < 5)`**: Executes the loop as long as `i` is less than 5.

4. **`printf("i: %d\n", i);`**: Prints the current value of `i`.

5. **`i++;`**: Increments `i` by 1 in each iteration.

6. **`return 0;`**: Indicates successful execution of the program.
