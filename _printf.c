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
		{'d', print_int},
		{'i', print_hexa},
		{'\0', NULL}
	};
	va_list args;
	int i = 0, total_words = 0, j, format_found = 0;

	va_start(args, format);

	if (format != NULL)
	{
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				j = 0;
				while (specif_format[j].c != '\0')
				{
					if (specif_format[j].c == format[i + 1])
					{
						total_words += specif_format[j].f(args);
						i += 2;
						format_found++;
						break;
					}
					j++;
				}
				if (!format_found)
				{
					if (format[i] == '%' && format[i + 1] == '%')
					{
						i++;
						continue;
					}
					else
					{
						_putchar(format[i]);
						i++;
						total_words++;
					}
				}
			}
			else 
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
	int MIN_hit = 0;
	int count = 8;
	int modulo = 1000000000;
	int division = 100000000;
	int n = va_arg(args, int);

	if (n == -2147483648)
	{
		n++;
		MIN_hit++;
	}
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	if (n != 0)
	{
		if (n > modulo)
		{
			_putchar((n / 1000000000) + '0');
		}
		else
		{
			while (modulo / 10 > n)
			{
				modulo /= 10;
				division /= 10;
				count--;
			}
		}
		while (count != 0)
		{
			_putchar(((n % modulo) / division) + '0');
			modulo /= 10;
			division /= 10;
			count--;
		}
		n %= 10;
	}
	if (MIN_hit == 1)
		n++;
	_putchar(n + '0');
	return (0);
}

/**
 *print_hexa - print an int
 *@args: the int to print
 *Return: int return
 */
int print_hexa(va_list args)
{
	int MIN_hit = 0;
	int count = 8;
	int modulo = 1000000000;
	int division = 100000000;
	int n = va_arg(args, int);

	if (n == -2147483648)
	{
		n++;
		MIN_hit++;
	}
	if (n < 0)
	{
		n = n * (-1);
		_putchar('-');
	}
	if (n != 0)
	{
		if (n > modulo)
		{
			_putchar((n / 1000000000) + '0');
		}
		else
		{
			while (modulo / 10 > n)
			{
				modulo /= 10;
				division /= 10;
				count--;
			}
		}
		while (count != 0)
		{
			_putchar(((n % modulo) / division) + '0');
			modulo /= 10;
			division /= 10;
			count--;
		}
		n %= 10;
	}
	if (MIN_hit == 1)
		n++;
	_putchar(n + '0');
	return (0);
}
