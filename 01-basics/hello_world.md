```c
#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}
```

```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

int main() {  // Main function where the program execution starts

    // Prints "Hello, World!" followed by a newline character to the console
    printf("Hello, World!\n");  // %s is not required here because it's a direct string literal

    return 0;  // Returns 0, indicating successful program execution
}
```

### **Five key points explained:**
1. **Standard I/O Library**: `#include <stdio.h>` includes necessary functions like `printf` for performing input-output operations in C.
2. **Main Function**: `int main()` is the main entry point for program execution in C.
3. **Printing to Console**: The `printf("Hello, World!\n");` statement prints the message "Hello, World!" to the console and moves to the next line with `\n`.
4. **Direct String Literal**: Since the text to be printed is directly provided as a string literal, no format specifier like `%s` is needed.
5. **Return Statement**: `return 0;` signals that the program has executed successfully and is returning control to the operating system.
