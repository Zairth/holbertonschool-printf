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
	specif_t *specif_format = get_specif_format();
	va_list args;
	int i = 0, total_words = 0, j;

	va_start(args, format);
	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				j = find_specifier(format[i + 1], specif_format);
				if (j != -1)
				{
					total_words += specif_format[j].f(args);
					i += 2;
				} else
				{
					if (format[i] == '%' && format[i + 1] == '%')
					{
						i++;
						continue;
					} else
					{
						_putchar(format[i]);
						i++;
						total_words++;
					}
				}
			} else
			{
				_putchar(format[i]);
				total_words++;
				i++;
			}
		}
		va_end(args);
		return (total_words);
	}
	return (-1);
}

/**
 *print_char - print a char
 *@args: the char to print
 *Return: int return
 */
int print_char(va_list args)
{
	int str = va_arg(args, int);

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
	int i = 0;
	char *str = NULL;

	str = va_arg(args, char *);

	if (str == NULL)
		str = "(null)";

	while (str[i] != '\0')
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
	int MIN_hit = 0, count = 8, mod = 1000000000, div = 100000000, nm_char = 0;
	int n = va_arg(args, int);

	if (n == -2147483648)
	{
		n++;
		MIN_hit++;
	}
	if (n < 0)
		n = n * (-1), _putchar('-'), nm_char++;
	if (n != 0)
	{
		if (n > mod)
			_putchar((n / 1000000000) + '0'), nm_char++;
		else
		{
			while (mod / 10 > n)
				mod /= 10, div /= 10, count--;
		}
		while (count != 0)
		{
			_putchar(((n % mod) / div) + '0');
			mod /= 10;
			div /= 10;
			count--;
			nm_char++;
		}
		n %= 10;
	}
	else
		return (-1);
	if (MIN_hit == 1)
		n++;
	_putchar(n + '0');
	return (nm_char++);
}
