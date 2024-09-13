Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

int main() {
    int number = 10;       // Integer variable initialized to 10
    int *ptr = &number;    // Pointer storing the address of 'number'

    // Print the address stored in the pointer
    printf("Pointer value: %p\n", ptr);

    // Print the value at the address pointed to by 'ptr'
    printf("Pointer dereferenced value: %d\n", *ptr);

    return 0;   // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the library for input-output operations.

2. **`int number = 10;`**: Initializes an integer variable `number` to 10.

3. **`int *ptr = &number;`**: Declares a pointer `ptr` that holds the address of `number`.

4. **`printf("Pointer value: %p\n", ptr);`**: Prints the address stored in `ptr`.

5. **`printf("Pointer dereferenced value: %d\n", *ptr);`**: Prints the value at the address pointed to by `ptr`, which is `number`.

6. **`return 0;`**: Indicates successful program execution.
