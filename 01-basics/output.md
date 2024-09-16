```c
#include <stdio.h>

int main() {
    printf("This is an example of output in C.\n");
    return 0;
}
```

```c
#include <stdio.h>  // Includes the standard input-output library for input-output operations

int main() {  // Main function where the program execution begins
    // Prints the message "This is an example of output in C." to the console
    printf("This is an example of output in C.\n");  // %s is not needed as it's a direct string literal

    return 0;  // Returns 0, indicating successful program execution
}
```

### **Five key points explained:**
1. **Standard I/O Library**: `#include <stdio.h>` includes functions like `printf` for handling input-output tasks in C.
2. **Main Function**: `int main()` is where the program execution begins in a C program.
3. **Console Output**: `printf("This is an example of output in C.\n");` prints the string message to the console and moves to the next line using `\n`.
4. **Direct String Literal**: No format specifiers like `%s` are required because the text is directly provided as a string literal.
5. **Return Statement**: `return 0;` signals the successful completion of the program and returns control to the operating system.
