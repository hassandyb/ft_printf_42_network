# ft_printf

## Overview

The `ft_printf` project is a recreation of the standard C library function `printf`. This project is part of the curriculum at the 42 programming school and aims to enhance your understanding of variadic functions, formatted output, and memory management in C.

## Project Objectives

- **Recreate the `printf` function:** Develop a function that mimics the behavior of the standard `printf` function.
- **Learn variadic functions:** Gain experience with functions that accept a variable number of arguments.
- **Handle formatted output:** Implement support for various format specifiers and flags to control the output format.
- **Memory management:** Ensure all dynamically allocated memory is properly managed to avoid leaks.

## Key Features

### Supported Conversions

Your `ft_printf` function will handle the following conversion specifiers:

- **%c**: Print a single character.
- **%s**: Print a string.
- **%p**: Print a pointer address in hexadecimal format.
- **%d**: Print a decimal (base 10) number.
- **%i**: Print an integer in base 10.
- **%u**: Print an unsigned decimal (base 10) number.
- **%x**: Print a number in hexadecimal (base 16) lowercase format.
- **%X**: Print a number in hexadecimal (base 16) uppercase format.
- **%%**: Print a percent sign.

### Bonus Features

If you complete the mandatory part of the project, you can add the following bonus features:

- **Flags**: Support for the flags `-0.` and the field minimum width for all conversions.
- **Additional Flags**: Support for the flags `# +` (space).

## Implementation Details

### Variadic Functions

The `ft_printf` function utilizes variadic functions to handle a variable number of arguments. This is achieved using the `stdarg.h` library, which provides macros to access the variable arguments.

### Parsing the Format String

The format string is parsed to identify format specifiers and flags. The parsing process involves:

1. **Identifying conversion specifiers**: Characters following a `%` that determine the type of data to be printed.
2. **Handling flags and width**: Characters that modify the behavior of the conversion specifier, such as padding, alignment, and precision.

### Conversion Functions

Each supported conversion specifier has a corresponding function that handles the actual data formatting and printing. These functions are responsible for:

- Converting data types to strings (e.g., integers to decimal or hexadecimal strings).
- Applying flags and width specifications to the formatted output.
- Writing the final formatted string to the standard output.

### Memory Management

Proper memory management is crucial to avoid leaks and ensure the stability of the function. Any dynamically allocated memory must be freed after use. The `malloc` and `free` functions are used for memory allocation and deallocation.

## Testing and Debugging

Testing is an essential part of the development process to ensure your `ft_printf` function behaves correctly. Here are some tips for testing and debugging:

- **Create test cases**: Write a variety of test cases covering different format specifiers, flags, and edge cases.
- **Compare with the standard `printf`**: Use the standard `printf` function as a reference to compare the output of your `ft_printf`.
- **Use debugging tools**: Utilize debugging tools such as `gdb` to step through your code and identify issues.
- **Check for memory leaks**: Use tools like `valgrind` to detect memory leaks and ensure all allocated memory is properly freed.

## Conclusion

The `ft_printf` project is an excellent opportunity to deepen your understanding of C programming and tackle complex problems involving formatted output and memory management. By the end of this project, you will have a greater appreciation for the intricacies of the `printf` function and improved problem-solving skills.

Good luck and happy coding!
