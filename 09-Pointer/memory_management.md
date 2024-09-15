### **1. Code without comments:**
```c
#include <stdio.h>
#include <stdlib.h>

int main() {
    int *ptr = (int*)malloc(sizeof(int));
    if (ptr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    *ptr = 100;
    printf("Value: %d\n", *ptr);
    free(ptr);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions
#include <stdlib.h> // Includes the library for memory allocation functions

int main() {
    int *ptr = (int*)malloc(sizeof(int));  /**< Allocates memory for an integer and assigns the address to 'ptr'. */

    // Check if memory allocation was successful
    if (ptr == NULL) {
        printf("Memory allocation failed\n");  /**< Print an error message if memory allocation fails. */
        return 1;  /**< Return 1 to indicate an error occurred. */
    }

    *ptr = 100;  /**< Assigns the value 100 to the allocated memory. */
    printf("Value: %d\n", *ptr);  /**< Prints the value stored in the allocated memory. */

    free(ptr);  /**< Frees the allocated memory to avoid memory leaks. */
    return 0;   /**< Return 0 to indicate successful execution. */
}
```

### Explanation:

- `#include <stdio.h>` includes the standard input-output library necessary for functions like `printf`.
- `#include <stdlib.h>` includes the library for memory allocation functions like `malloc` and `free`.
- `int *ptr = (int*)malloc(sizeof(int));` allocates memory sufficient to hold one `int` and assigns the address of this memory block to `ptr`:
  - `malloc(sizeof(int))` requests memory allocation for one integer.
  - `(int*)` casts the returned `void*` pointer to an `int*`.
- `if (ptr == NULL)` checks if the memory allocation failed:
  - If `malloc` fails, it returns `NULL`, and the program prints an error message and exits with a status of `1`.
- `*ptr = 100;` assigns the value `100` to the allocated memory:
  - `*ptr` accesses the value at the memory location pointed to by `ptr`.
- `printf("Value: %d\n", *ptr);` prints the value stored at the memory location:
  - `%d` is used to format the integer value.
- `free(ptr);` deallocates the memory previously allocated:
  - It is important to free allocated memory to prevent memory leaks.
- `return 0;` indicates that the program completed successfully.
