### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    printf("You entered: %d\n", number);

    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for input-output operations

int main() {  // Main function where program execution begins
    int number;  // Declares an integer variable 'number' to store user input

    // Prompts the user to enter an integer value
    printf("Enter a number: ");

    // Reads the integer value from user input and stores it in 'number'
    scanf("%d", &number);

    // Outputs the value entered by the user
    printf("You entered: %d\n", number);

    return 0;  // Returns 0, indicating successful program execution
}
```

### Explanation:

- `#include <stdio.h>` is used to include functions like `printf` and `scanf` for input and output.
- `int number;` declares a variable to store the integer value entered by the user.
- `printf("Enter a number: ");` prompts the user to input a number.
- `scanf("%d", &number);` reads the user input and stores the integer value in the `number` variable.
- `printf("You entered: %d\n", number);` prints the value entered by the user.
