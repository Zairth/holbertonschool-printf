# _printf Project

The **_printf** project is a custom implementation of the standard `printf` function in C.  
It replicates the behavior of `printf`, allowing formatted output with simple format specifiers.  
This project was developed as an educational exercise to better understand variadic functions, structures, and argument handling in C.

---

## Features

The `_printf` function supports the following format specifiers:

| Specifier   | Description                                 |
|-------------|---------------------------------------------|
| `%s`        | Prints a string.                            |
| `%c`        | Prints a single character.                  |
| `%d, %i`    | Prints a signed integer in base 10.         |
| `%%`        | Prints a literal `%` character.             |

---

## Prototype

```c
int _printf(const char *format, ...);
```

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
git clone "https://github.com/Zairth/holbertonschool-printf.git"
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

## Limitations

| Limitation | Description |
|------------|-------------|
| Advanced specifiers | Does not support any others format specifiers such as %f, %x, %o, %p or %ld ... |

This project uses a simplified implementation and lacks some optimizations of the standard printf.  

## Files

| File          | Description                                            |
|---------------|--------------------------------------------------------|
| **main.h**        | Contains prototypes and structure definitions.        |
| **_printf.c**     | Main implementation of _printf.                        |
| **_putchar.c**    | Function to write a single character to stdout.        |
| **get_fonc.c**  | Handles format specifiers and their functions.        |
| **man_3_printf.1** | The code of the Man Page. Use `man ./man_3_printf.1` to see the Man Page    | 

## MAN Page
![## MAN Page](https://image.noelshack.com/fichiers/2024/48/5/1732885445-man-page.png)

## Flowchart
![## Flowchart](https://image.noelshack.com/fichiers/2024/48/5/1732903736-new-flowchart.png)

# Authors  
## Étienne Loichot   &   Luca Gimenez
