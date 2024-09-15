### **1. Code without comments:**
```c
#include <stdio.h>

int main() {
    char buffer[100];
    FILE *file = fopen("example.txt", "r");
    if (file == NULL) {
        printf("Failed to open file.\n");
        return 1;
    }
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        printf("%s", buffer);
    }
    fclose(file);
    return 0;
}
```

### **2. Code with comments and explanations:**
```c
#include <stdio.h>  // Includes the standard input-output library for file operations

int main() {  // Main function where program execution begins
    char buffer[100];  // Declares a character array 'buffer' to store file content
    // Opens the file "example.txt" for reading
    FILE *file = fopen("example.txt", "r");
    
    // Check if the file was successfully opened
    if (file == NULL) {
        // If file opening fails, print an error message and return 1
        printf("Failed to open file.\n");
        return 1;  // Return 1 to indicate an error
    }

    // Read lines from the file until the end is reached
    while (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Print each line read from the file
        printf("%s", buffer);
    }

    // Close the file to free up resources
    fclose(file);

    return 0;  // Return 0 to indicate successful program execution
}
```

### Explanation:

- `#include <stdio.h>` includes the functions required for file handling.
- `char buffer[100];` declares a buffer to hold lines read from the file.
- `FILE *file = fopen("example.txt", "r");` opens "example.txt" for reading. If the file doesn't exist or cannot be opened, `file` will be `NULL`.
- `if (file == NULL)` checks if the file was opened successfully. If not, it prints an error message and returns `1`.
- `while (fgets(buffer, sizeof(buffer), file) != NULL)` reads each line from the file into the `buffer` until the end of the file is reached. `fgets` returns `NULL` when no more lines are available.
- `printf("%s", buffer);` prints each line read from the file.
- `fclose(file);` closes the file after reading to release resources.
