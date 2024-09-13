Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

int main() {
    int number;  // Integer variable to store the user's input

    // Prompt the user to enter a number
    printf("Enter a number: ");

    // Read the integer value from user input
    scanf("%d", &number);

    // Print the value entered by the user
    printf("You entered: %d\n", number);

    return 0;   // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the library needed for input and output operations.

2. **`int number;`**: Declares an integer variable `number` to store user input.

3. **`printf("Enter a number: ");`**: Prompts the user to enter a number.

4. **`scanf("%d", &number);`**: Reads an integer from user input and stores it in `number`.

5. **`printf("You entered: %d\n", number);`**: Prints the value entered by the user.

6. **`return 0;`**: Indicates successful execution of the program.
