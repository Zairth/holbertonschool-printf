#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	specif_t specif_format[] = {
		{'c', print_char},
		{'s', print_string},
		{'d', print_int},
		{'i', print_hexa},
		{'\0', NULL}
	};
	va_list args;
	int i = 0;
	int j, k;
	int total_words = 0;
	char *missing_arg = "Missing Arguments.";
	char *missing_specif = "Missing Specificator.";

	va_start(args, format);

	if (format != NULL)
	{
		if (args == NULL)
		{
			k = 0;
			while (missing_arg[k] != NULL)
			{
				_putchar(missing_arg[k]);
				k++;
			}
			exit(1);
		}
		while (format[i] != NULL)
		{
			// _printf("Hello world %s%s", str, str2)
			j = 0;
			while (specif_format[j].c != '\0')
			{
				if (format[i] == '%' && format[i + 1] == specif_format[j].c)
					total_words += specif_format[j].f(args);
				j++;
			}
			_putchar(format[i]);
			i++;
		}
	} else
	{
		k = 0;
		while (missing_specif[k] != NULL)
		{
			_putchar(missing_specif[k]);
			k++;
		}
		exit(2);
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
	char *str = va_arg(args, int);
	int i = 0;

	while (str != NULL)
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 *print_string - print a strings
 *@args: the string to print
 *Return: int return
 */
int print_string(va_list args)
{
	char *str = va_arg(args, char *);
	int i = 0;

	while (str != NULL)
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 *print_int - print an int
 *@args: the int to print
 *Return: int return
 */
int print_int(va_list args)
{
	char *str = va_arg(args, int);
	int i = 0;

	while (str != NULL)
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}

/**
 *print_hexa - print an int in hexadecimal format
 *@args: the int to print in hexadecimal
 *Return: int return
 */
int print_hexa(va_list args)
{
	char *str = va_arg(args, int);
	int i = 0;

	while (str != NULL)
	{
		_putchar(str[i]);
		i++;
	}

	return (i);
}
