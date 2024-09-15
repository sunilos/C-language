### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int number = 10;
    int *ptr = &number;

    printf("Pointer value: %p\n", ptr);
    printf("Pointer dereferenced value: %d\n", *ptr);

    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

/**
 * @brief The main function demonstrates pointer usage in C.
 * 
 * This function initializes an integer variable, assigns its address to a pointer,
 * and then prints both the pointer's address and the value it points to.
 * 
 * @return int Returns 0 to indicate successful execution.
 */
int main() {
    int number = 10;       /**< The integer variable initialized to 10. */
    int *ptr = &number;    /**< Pointer variable that stores the address of 'number'. */

    // Print the address stored in the pointer
    printf("Pointer value: %p\n", ptr);  // %p format specifier is used to print the pointer's address

    // Print the value at the address pointed to by 'ptr'
    printf("Pointer dereferenced value: %d\n", *ptr);  // *ptr dereferences the pointer to access the value of 'number'

    return 0;   /**< Return 0 to indicate successful execution. */
}
```

### Explanation:

- `#include <stdio.h>` includes the standard input-output library necessary for functions like `printf`.
- `int number = 10;` declares an integer variable named `number` and initializes it with the value `10`.
- `int *ptr = &number;` declares a pointer variable `ptr` and assigns it the address of the `number` variable:
  - `&number` gets the address of the `number` variable.
- `printf("Pointer value: %p\n", ptr);` prints the address stored in the pointer:
  - `%p` is the format specifier used to print a pointer (address).
- `printf("Pointer dereferenced value: %d\n", *ptr);` prints the value at the address pointed to by `ptr`:
  - `*ptr` dereferences the pointer to get the value stored at the address it points to (`number`).
- `return 0;` indicates that the program completed successfully.
