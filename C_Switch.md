Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

int main() {
    int day = 3;  // Integer representing the day of the week

    // Switch statement to determine and print the day of the week
    switch (day) {
        case 1:
            printf("Monday\n");   // Prints "Monday" if day is 1
            break;               // Exits the switch statement
        case 2:
            printf("Tuesday\n");  // Prints "Tuesday" if day is 2
            break;               // Exits the switch statement
        case 3:
            printf("Wednesday\n"); // Prints "Wednesday" if day is 3
            break;               // Exits the switch statement
        default:
            printf("Other day\n"); // Prints "Other day" for other values
    }

    return 0;   // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the library needed for `printf`.

2. **`int day = 3;`**: Declares an integer `day` and initializes it to 3.

3. **`switch (day)`**: Switch statement to handle different values of `day`.

4. **`case 1:`**: Executes if `day` is 1, printing "Monday".

5. **`case 2:`**: Executes if `day` is 2, printing "Tuesday".

6. **`case 3:`**: Executes if `day` is 3, printing "Wednesday".

7. **`default:`**: Executes if `day` does not match any of the specified cases, printing "Other day".

8. **`return 0;`**: Indicates successful execution of the program.
