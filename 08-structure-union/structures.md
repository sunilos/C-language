### **1. Code without comments:**
```c
#include <stdio.h>

struct Person {
    char name[50];
    int age;
};

int main() {
    struct Person person = {"John Doe", 30};
    printf("Name: %s\n", person.name);
    printf("Age: %d\n", person.age);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for input-output functions

// Define a structure 'Person' with two members: a character array 'name' and an integer 'age'
struct Person {
    char name[50];  // Array to hold the name of the person, up to 49 characters plus null terminator
    int age;        // Integer to store the age of the person
};

int main() {  // Main function where the program execution begins
    // Declare and initialize a variable 'person' of type 'struct Person'
    struct Person person = {"John Doe", 30};
    
    // Print the 'name' member of the 'person' structure
    printf("Name: %s\n", person.name);

    // Print the 'age' member of the 'person' structure
    printf("Age: %d\n", person.age);

    return 0;  // Return 0 to indicate successful program execution
}
```

### Explanation:

- `#include <stdio.h>` includes the standard input-output library needed for functions like `printf`.
- `struct Person { char name[50]; int age; };` defines a structure named `Person`. This structure contains:
  - `char name[50];` to store the person's name with up to 49 characters plus a null terminator.
  - `int age;` to store the person's age.
- `struct Person person = {"John Doe", 30};` creates an instance of `struct Person` named `person`, initializing `name` to `"John Doe"` and `age` to `30`.
- `printf("Name: %s\n", person.name);` prints the `name` member of the `person` structure.
- `printf("Age: %d\n", person.age);` prints the `age` member of the `person` structure.
- `return 0;` indicates that the program executed successfully.
