#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

/**
 *get_specif_format - the data structure to get with a call function
 *Return: specif_t return, the data structure
 */
specif_t *get_specif_format()
{
	static specif_t specif_format[] = {
		{'s', print_string},
		{'c', print_char},
		{'d', print_int},
		{'i', print_int},
		{'\0', NULL}};

	return (specif_format);
}

/**
 *find_specifier - A homemade printf
 *@c: the char to compare with the data structure
 *@specif_format: the data structure to use
 *Return: int return
 */
int find_specifier(char c, specif_t *specif_format)
{
	int j = 0;

	while (specif_format[j].c != '\0')
	{
		if (specif_format[j].c == c)
		{
			return (j);
		}
		j++;
	}

	return (-1);
}
