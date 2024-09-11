Here’s your C code with added comments:

```c
#include <stdio.h>   // Includes the standard input/output library, needed for printf function

int main() {
    // A 'for' loop that iterates from i = 0 to i < 10
    for (int i = 0; i < 10; i++) {
        
        // If 'i' equals 5, exit the loop using 'break'
        if (i == 5) {
            break;  // Terminates the loop
        }
        
        // If 'i' equals 2, skip the rest of the loop and continue with the next iteration
        if (i == 2) {
            continue;  // Skips the current iteration
        }
        
        // Print the value of 'i' for each iteration that is not skipped
        printf("i: %d\n", i);
    }

    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation:
- **`if (i == 5) { break; }`**: The `break` statement stops the loop when `i` is equal to 5, exiting the loop completely.
- **`if (i == 2) { continue; }`**: The `continue` statement skips the current iteration when `i` is equal to 2, and the loop moves on to the next iteration.
- **`printf("i: %d\n", i);`**: Prints the value of `i` for each iteration, except for the ones skipped by `continue` or terminated by `break`.
