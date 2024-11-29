# _printf Project

The **_printf** project is a custom implementation of the standard `printf` function in C. It replicates the behavior of `printf`, allowing formatted output with simple format specifiers.  
This project was developed as an educational exercise to better understand variadic functions, structures, and argument handling in C.

---

## Features

The `printf` function supports the following format specifiers:

| Specifier   | Description                                 |
|-------------|---------------------------------------------|
| `%s`        | Prints a string.                            |
| `%c`        | Prints a single character.                  |
| `%d, %i`    | Prints a signed integer in base 10.         |
| `%%`        | Prints a literal `%` character.             |

---

## Prototype

`int _printf(const char *format, ...);`

## Usage

**1.  Include the main.h header file in your code.**  
**2.  Call _printf with a format string and the appropriate arguments.**

## Examples
- #### Printing strings and characters:
```c 
_printf("Hello, %s!\n", "world");
```
Output: *Hello, world!*

--

- #### Printing integers:
```c 
_printf("There are %d days in a week.\n", 7);
```
Output: *There are 7 days in a week.*

--

- #### Printing a literal %:
```c 
_printf("There are %d days in a week.\n", 7);  
```
Output: *Discount: 50% off!*

## Installation
- #### Clone the repository:  
```git
git clone <REPOSITORY_URL>
```

- #### Test with an example:  
```c
#include "main.h"
int main(void)
{
    _printf("Hello, %s! %d days left.\n", "world", 5);
    return (0);
}
```

- #### Compile the project using gcc:  
```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o printf
```

- #### Run the executable:  
```bash
./printf
```

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
This project was created by your team as part of an educational exercise. Feel free to add specific team member names here if needed.
