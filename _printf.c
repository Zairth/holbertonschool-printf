#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 *_printf - A homemade printf
 *@format: the str to print
 *@...: the variadic arguments
 *Return: int return
 */
int _printf(const char *format, ...)
{
	specif_t specif_format[] = {
		{'s', print_string},
		{'c', print_char},
		{'\0', NULL}
	};
	va_list args;
	int i = 0, total_words = 0, j, result = 0;

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			j = 0;
			while (specif_format[j].c != '\0')
			{
				if (format[i] == '%' && format[i + 1] == specif_format[j].c)
				{
					result = specif_format[j].f(args);
					if (result == -1)
						return (-1);
					total_words += result;
					i += 2;
				}
				j++;
			}
			_putchar(format[i]);
			if (format[i] != '\0')
				i++;
		}
		va_end(args);
		_putchar('\n');
		return (total_words + i);
	}
	return (0);
}

/**
 *print_char - print a char
 *@args: the char to print
 *Return: int return
 */
int print_char(va_list args)
{
	char str = va_arg(args, int);

	_putchar(str);

	return (1);
}

/**
 *print_string - print a strings
 *@args: the string to print
 *Return: int return
 */
int print_string(va_list args)
{
	int i = 0, j = 0;
	char *str = NULL;
	str = va_arg(args, char *);

	while ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
	{
		if (str[i] == '\0')
			break;
		_putchar(str[i]);
		i++;
		j++;
	}

	if (j == 0)
	{
		int k = 0;
		char *miss_arg = "Missing Arguments, string touched\n";

		while (miss_arg[k] != '\0')
		{
			_putchar(miss_arg[k]);
			k++;
		}
		return -1;
	}

	return (i);
}
