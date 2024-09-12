# Naming Convention 

In C programming, there isn't a strict, universally enforced naming convention, but there are widely accepted best practices that promote readability, maintainability, and consistency. Here are some common naming conventions for different elements in C programs:

### 1. **File Names**
- **Lowercase letters with underscores** are commonly used.
- **Use descriptive names** that indicate the purpose of the file.
- **File extension**: `.c` for source files and `.h` for header files.

**Example**: 
- `main.c`
- `utilities.c`
- `string_operations.c`

### 2. **Variables**
- **Use meaningful and descriptive names** that reflect the purpose of the variable.
- For **local variables**: typically lowercase with words separated by underscores.
- **Global variables**: sometimes use a prefix or suffix to indicate scope, such as `g_` or `_global`.

**Example**: 
- `int student_age;`
- `char file_name[100];`
- `int g_total_count;` (for global variable)

### 3. **Constants**
- Use **all uppercase letters** with words separated by underscores.
- This distinguishes constants from variables.

**Example**: 
- `#define MAX_BUFFER_SIZE 1024`
- `const int DAYS_IN_WEEK = 7;`

### 4. **Functions**
- **Use descriptive names** that indicate what the function does.
- Typically **lowercase letters** with words separated by underscores (snake_case).
- For external or library functions, prefixing the function name with a short identifier related to the module is common.

**Example**:
- `int calculate_total();`
- `void print_message();`
- `char* get_user_input();`

### 5. **Structs, Enums, and Typedefs**
- **Struct and enum names** usually use lowercase letters with underscores.
- **Typedefs**: Use descriptive names in **PascalCase** or **snake_case**.

**Example**:
- `struct student_record {};`
- `enum error_code {};`
- `typedef struct student_record StudentRecord;`

### 6. **Macros**
- **All uppercase letters** with words separated by underscores (similar to constants).
- Prefix with a module-specific identifier to avoid naming conflicts.

**Example**:
- `#define MAX_LENGTH 100`
- `#define PI 3.14159`

### 7. **Pointers**
- Use descriptive names, with a common convention of **prefixing the variable name with `p`** or using a suffix `_ptr`.

**Example**:
- `int* pNumber;`
- `char* buffer_ptr;`

### 8. **Header Guards**
- Use **all uppercase letters** and include a prefix that reflects the module or file.

**Example**:
```c
#ifndef MODULE_HEADER_H
#define MODULE_HEADER_H

// Header content

#endif // MODULE_HEADER_H
```

### 9. **Function Parameters**
- Use **descriptive names** for parameters to indicate their use, following the same conventions as for variables.

**Example**:
```c
int calculate_area(int width, int height);
```

### 10. **Prefixing for External/Internal Functions or Variables**
- Prefix function names with a short module identifier to distinguish them from other modules' functions, especially in large projects.

**Example**:
- `db_connect()` for a function in a database module.

### Summary
- **File names**: `lowercase_with_underscores.c`
- **Variables and function names**: `lowercase_with_underscores`
- **Constants and macros**: `ALL_CAPS_WITH_UNDERSCORES`
- **Structs/enums**: `lowercase_with_underscores`, typedefs sometimes use `PascalCase`
- **Header guards**: `ALL_CAPS_WITH_UNDERSCORES_H`

Following these conventions helps improve code readability and maintainability, especially in collaborative environments.
