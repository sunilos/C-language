### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    int day = 3;

    switch (day) {
        case 1:
            printf("Monday\n");
            break;
        case 2:
            printf("Tuesday\n");
            break;
        case 3:
            printf("Wednesday\n");
            break;
        default:
            printf("Other day\n");
    }

    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>

/**
 * @brief The main function demonstrates the use of a switch statement.
 * 
 * This function uses a switch statement to print the name of the day corresponding to the integer value of 'day'.
 * 
 * @return int Returns 0 to indicate successful execution.
 */
int main() {
    int day = 3;  /**< Integer variable representing the day of the week. */

    // Switch statement to determine and print the day of the week
    switch (day) {
        case 1:
            printf("Monday\n");   /**< Prints "Monday" if day is 1. */
            break;               /**< Exits the switch statement after the case is executed. */
        case 2:
            printf("Tuesday\n");  /**< Prints "Tuesday" if day is 2. */
            break;               /**< Exits the switch statement after the case is executed. */
        case 3:
            printf("Wednesday\n");/**< Prints "Wednesday" if day is 3. */
            break;               /**< Exits the switch statement after the case is executed. */
        default:
            printf("Other day\n");/**< Prints "Other day" for any value not explicitly handled by the cases. */
    }

    return 0;   /**< Return 0 to indicate successful execution. */
}
```

### Explanation

- The `#include <stdio.h>` directive includes the Standard I/O library, which provides functions such as `printf` for output operations.
- The `main` function is where the program execution begins.
- An integer variable `day` is declared and initialized with the value `3`.
- The `switch` statement is used to select one of many code blocks to be executed based on the value of `day`.
  - The `case 1:` block prints "Monday" if `day` equals `1`.
  - The `case 2:` block prints "Tuesday" if `day` equals `2`.
  - The `case 3:` block prints "Wednesday" if `day` equals `3`.
  - The `default` block handles any value not explicitly listed in the cases and prints "Other day".
- Each `case` is followed by a `break` statement to exit the `switch` statement after executing the matching block. Without the `break`, execution would continue into the next case.
- The program ends with `return 0;`, indicating successful execution and returning control to the operating system.
