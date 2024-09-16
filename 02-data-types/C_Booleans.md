```c
#include <stdio.h>
#include <stdbool.h>

int main() {
    bool isTrue = true;
    printf("Boolean value: %d\n", isTrue);
    return 0;
}
```

```c
#include <stdio.h>   // Includes the standard input/output library, needed for printf function
#include <stdbool.h> // Includes the library to use boolean data types like 'bool', 'true', and 'false'

int main() {
    bool isTrue = true;  // Declares a boolean variable 'isTrue' and assigns it the value 'true'
    
    // Prints the boolean value (in C, 'true' is represented as 1 and 'false' as 0)
    printf("Boolean value: %d\n", isTrue);
    
    return 0;  // Returns 0 to indicate successful execution
}
```

- The `#include <stdio.h>` directive includes the Standard I/O library, which provides the `printf` function for output operations.
- The `#include <stdbool.h>` directive includes the Boolean library, allowing the use of the `bool` type along with the `true` and `false` values.
- The `main` function is the entry point of the program. Within this function, a boolean variable `isTrue` is declared and initialized to `true`.
- The `printf` function is used to print the value of `isTrue`. In C, boolean `true` is represented as `1` and `false` as `0`, so `%d` format specifier is used to print this integer representation.
- The program ends with `return 0;`, signaling successful completion of the program execution.
