Here’s your C code with meaningful comments followed by an explanation:

```c
#include <stdio.h>   // Includes the standard input/output library, needed for printf function

int main() {
    // A 'for' loop that iterates from i = 0 to i < 10
    for (int i = 0; i < 10; i++) {
        
        // If 'i' equals 5, exit the loop using 'break'
        if (i == 5) {
            break;  // Terminates the loop immediately
        }
        
        // If 'i' equals 2, skip the rest of the current loop iteration and continue with the next iteration
        if (i == 2) {
            continue;  // Skips the remaining statements in the loop for this iteration
        }
        
        // Print the value of 'i' for each iteration that is not skipped
        printf("i: %d\n", i);
    }

    return 0;  // Returns 0 to indicate that the program executed successfully
}
```

### Explanation

1. **`#include <stdio.h>`**: This line includes the standard input/output library, which is required to use the `printf` function for printing output to the console.

2. **`int main()`**: The main function, which is the entry point for the program. It returns an integer to the operating system.

3. **`for (int i = 0; i < 10; i++)`**: This `for` loop initializes the loop control variable `i` to 0 and iterates as long as `i` is less than 10. The variable `i` is incremented by 1 after each iteration.

4. **`if (i == 5) { break; }`**: This condition checks if `i` equals 5. If true, the `break` statement is executed, which immediately exits the loop, skipping any further iterations.

5. **`if (i == 2) { continue; }`**: This condition checks if `i` equals 2. If true, the `continue` statement is executed, which skips the remaining code in the current loop iteration and proceeds to the next iteration.

6. **`printf("i: %d\n", i);`**: This line prints the current value of `i` for each iteration of the loop that is not skipped by the `continue` statement. The `%d` format specifier is used to print the integer value of `i`.

7. **`return 0;`**: This statement indicates that the program has finished executing successfully. The `0` is returned to the operating system to signify no errors occurred during execution.
