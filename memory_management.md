Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));  // Allocates memory for one integer and assigns the pointer to 'ptr'
    
    if (ptr == NULL) {  // Checks if memory allocation failed
        printf("Memory allocation failed\n");  // Prints an error message
        return 1;  // Returns 1 to indicate an error
    }

    *ptr = 100;  // Assigns the value 100 to the allocated memory

    // Prints the value stored at the memory location pointed to by 'ptr'
    printf("Value: %d\n", *ptr);

    free(ptr);  // Frees the allocated memory

    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for input and output functions.

2. **`#include <stdlib.h>`**: Includes the library for memory allocation functions.

3. **`int *ptr = (int*)malloc(sizeof(int));`**: Allocates memory for one integer and assigns the pointer to `ptr`. The `(int*)` cast converts the `void*` returned by `malloc` to `int*`.

4. **`if (ptr == NULL)`**: Checks if memory allocation failed (i.e., if `malloc` returned `NULL`).

5. **`printf("Memory allocation failed\n");`**: Prints an error message if allocation failed.

6. **`*ptr = 100;`**: Assigns the value 100 to the allocated memory location.

7. **`printf("Value: %d\n", *ptr);`**: Prints the value stored at the memory location pointed to by `ptr`.

8. **`free(ptr);`**: Frees the allocated memory to prevent memory leaks.

9. **`return 0;`**: Indicates successful completion of the program.
