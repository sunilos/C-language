### **1. Code without comments:**
```c
#include <stdio.h>
#include <math.h>

int main() {
    double num = 16.0;
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>   // Includes the standard input-output library for input-output functions
#include <math.h>    // Includes the math library to use mathematical functions like sqrt()

int main() {  // Main function where the program execution begins
    double num = 16.0;  // Declares a double variable 'num' and assigns it the value 16.0

    // Prints the square root of 'num' using the sqrt() function from math.h
    // %.2f is used to format the floating-point number to 2 decimal places
    printf("Square root of %.2f is %.2f\n", num, sqrt(num));

    return 0;  // Returns 0, indicating successful program execution
}
```

### Explanation:

- `#include <stdio.h>` allows for input-output operations using `printf`.
- `#include <math.h>` includes mathematical functions like `sqrt()` for square root calculation.
- `double num = 16.0;` initializes a variable `num` with a floating-point value.
- `sqrt(num)` computes the square root of `num`, and `%.2f` ensures the output is formatted to two decimal places.
- The program ends with `return 0;` to indicate successful execution.
