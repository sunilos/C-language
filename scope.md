Here’s the C code with minimal comments and a brief explanation:

```c
#include <stdio.h>

int globalVar = 10;  // Global variable initialized to 10

void display() {
    int localVar = 20;  // Local variable initialized to 20
    printf("Global Variable: %d\n", globalVar);  // Prints the global variable
    printf("Local Variable: %d\n", localVar);    // Prints the local variable
}

int main() {
    display();  // Calls the display function
    return 0;   // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`int globalVar = 10;`**: Defines a global variable `globalVar` with an initial value of 10.

2. **`void display()`**: Function to print both global and local variables.

3. **`int localVar = 20;`**: Defines a local variable `localVar` with an initial value of 20 within the `display` function.

4. **`printf("Global Variable: %d\n", globalVar);`**: Prints the value of the global variable.

5. **`printf("Local Variable: %d\n", localVar);`**: Prints the value of the local variable.

6. **`int main()`**: Main function where execution begins.

7. **`display();`**: Calls the `display` function to execute its code.

8. **`return 0;`**: Indicates successful completion of the program.
