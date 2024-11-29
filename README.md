_printf
Description
The _printf project is a custom implementation of the standard printf function in C. It replicates the behavior of printf, allowing formatted output with simple format specifiers.

This project was developed as an educational exercise to better understand variadic functions, structures, and argument handling in C.

Features
The _printf function supports the following format specifiers:

Specifier	Description
%s	Prints a string.
%c	Prints a single character.
%d, %i	Prints a signed integer in base 10.
%%	Prints a literal % character.
Prototype

int _printf(const char *format, ...);
Usage
Include the main.h header file in your code.
Call _printf with a format string and the appropriate arguments.
Examples
Printing strings and characters:


_printf("Hello, %s!\n", "world");
// Output: Hello, world!
Printing integers:


_printf("There are %d days in a week.\n", 7);
// Output: There are 7 days in a week.
Printing a literal %:

_printf("Discount: 50%% off!\n");
// Output: Discount: 50% off!
Installation
Clone the repository:

git clone <REPOSITORY_URL>
Compile the project using gcc:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
Run the executable:

./printf
Limitations
Does not support advanced format specifiers like %f, %x, or %p.
This project uses a simplified implementation and lacks some optimizations of the standard printf.
Files
File	Description
main.h	Contains prototypes and structure definitions.
_printf.c	Main implementation of _printf.
_putchar.c	Function to write a single character to stdout.
specifiers.c	Handles format specifiers and their functions.
Authors
This project was created by your team as part of an educational exercise.
Let me know if you'd like to add specific names here!
