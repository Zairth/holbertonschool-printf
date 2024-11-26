#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

/**
 *struct Specificateur_Format - Structure of Specificateur
 *@c: The char associated to the right function
 *@f: The function associated to the char
 */
typedef struct Specificateur_Format
{
	char *c;
	int (*f)(va_list);
} specif_t;

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list);
int print_string(va_list);
int print_int(va_list);
int print_hexa(va_list);
#endif
