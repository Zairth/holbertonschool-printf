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

/**
 *print_char - print a char
 *@args: the char to print
 *Return: void return
 */
void print_char(va_list args)
{

}

/**
 *print_string - print a strings
 *@args: the string to print
 *Return: void return
 */
void print_string(va_list args)
{
	
}

/**
 *print_percent - print a percent
 *@args: the percent to print
 *Return: void return
 */
void print_percent(va_list args)
{
	
}
