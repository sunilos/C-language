Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>

enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};  // Enum defining days of the week

int main() {
    enum Day today = WEDNESDAY;  // Sets 'today' to WEDNESDAY

    // Print the integer value associated with 'WEDNESDAY'
    printf("Day number: %d\n", today);

    return 0;  // Return 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for input and output functions.

2. **`enum Day {SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY};`**: Defines an enumeration `Day` with values for each day of the week.

3. **`enum Day today = WEDNESDAY;`**: Initializes the variable `today` to `WEDNESDAY`, which corresponds to the integer value 3 (default indexing starts from 0).

4. **`printf("Day number: %d\n", today);`**: Prints the integer value of `today`, which is 3 for `WEDNESDAY`.

5. **`return 0;`**: Indicates successful completion of the program.
