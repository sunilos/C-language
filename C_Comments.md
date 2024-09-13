Here’s your C code with meaningful comments followed by an explanation:

```c
#include <stdio.h>  // Preprocessor directive to include the standard input-output library

int main() {  // Main function where program execution begins
    // This is a single-line comment explaining that the next line prints a message.
    
    /* This is a multi-line comment.
       Multi-line comments allow you to add detailed descriptions or
       explanations across several lines. */
    
    printf("Comments in C.\n");  // Prints the message "Comments in C." followed by a new line
    
    return 0;  // Returns 0 indicating that the program executed successfully
}
```

### Explanation

1. **`#include <stdio.h>`**: This line is a preprocessor directive that tells the compiler to include the standard input-output library, which provides the `printf` function used for displaying output to the console.

2. **`int main()`**: This is the main function where the execution of the program starts. The `int` before `main` indicates that the function returns an integer value.

3. **`// This is a single-line comment explaining that the next line prints a message.`**: This is a single-line comment. It provides a brief explanation of the purpose of the following line of code. Single-line comments in C begin with `//` and extend to the end of the line.

4. **`/* This is a multi-line comment. Multi-line comments allow you to add detailed descriptions or explanations across several lines. */`**: This is a multi-line comment. It is used for more extensive explanations and can span multiple lines. Multi-line comments begin with `/*` and end with `*/`.

5. **`printf("Comments in C.\n");`**: This line prints the string "Comments in C." to the console followed by a newline character (`\n`). The `printf` function is used to output formatted text.

6. **`return 0;`**: This statement ends the `main` function and returns the value `0` to the operating system, indicating that the program executed successfully without errors.
