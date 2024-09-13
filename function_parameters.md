Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

void add(int a, int b) {
    printf("Sum: %d\n", a + b);  // Prints the sum of 'a' and 'b'
}

int main() {
    add(3, 4);  // Calls the add() function with arguments 3 and 4
    return 0;  // Return 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for input and output functions.

2. **`void add(int a, int b)`**: Defines the `add` function that takes two integers `a` and `b`, and prints their sum.

3. **`printf("Sum: %d\n", a + b);`**: Prints the result of adding `a` and `b`.

4. **`int main()`**: The main function where execution starts.

5. **`add(3, 4);`**: Calls the `add` function with the arguments 3 and 4.

6. **`return 0;`**: Indicates successful completion of the program.
