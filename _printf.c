#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	specif specif_format[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%%", print_percent},
		{'\0', NULL}
	};
	va_list args;

	va_start(args, format);

	return (0);
}
