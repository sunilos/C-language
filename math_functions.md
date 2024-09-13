Here’s the C code with concise comments and a brief explanation:

```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 9.0;  // Initializes 'num' with the value 9.0

    // Print the square root of 'num' using the sqrt() function from math.h
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));

    return 0;  // Return 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard library for input and output functions.

2. **`#include <math.h>`**: Includes the math library for mathematical functions like `sqrt`.

3. **`double num = 9.0;`**: Initializes a `double` variable `num` with the value 9.0.

4. **`printf("Square root of %.2f is %.2f\n", num, sqrt(num));`**: Calculates and prints the square root of `num` using `sqrt()` and formats the output to 2 decimal places.

5. **`return 0;`**: Indicates successful completion of the program.
