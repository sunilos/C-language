Here’s the C code with minimal comments and a brief explanation:

```c
#include <stdio.h>  // Includes the standard input-output library

struct Person {     // Defines a structure to hold person details
    char name[50];  // Character array to store the name
    int age;        // Integer to store the age
};

int main() {
    struct Person person = {"John Doe", 30};  // Initializes a Person instance

    printf("Name: %s\n", person.name);  // Prints the name
    printf("Age: %d\n", person.age);    // Prints the age

    return 0;  // Returns 0 to indicate successful execution
}
```

### Explanation

1. **`#include <stdio.h>`**: Includes the standard input-output library for functions like `printf`.

2. **`struct Person`**: Defines a structure to hold a person's details, including a name and age.

3. **`struct Person person = {"John Doe", 30};`**: Initializes a `Person` structure with the name "John Doe" and age 30.

4. **`printf("Name: %s\n", person.name);`**: Prints the name from the `person` structure.

5. **`printf("Age: %d\n", person.age);`**: Prints the age from the `person` structure.

6. **`return 0;`**: Indicates successful completion of the program.
