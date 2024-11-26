#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "main.h"

int _printf(const char *format, ...)
{
	specif specif_format[] = {
		{"%c", print_char},
		{"%s", print_string},
		{"%d", print_int},
		{"%i", print_hexa},
		{NULL, NULL}
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
 *print_int - print an int
 *@args: the int to print
 *Return: void return
 */
void print_int(va_list args)
{
	
}

/**
 *print_hexa - print an int in hexadecimal format
 *@args: the int to print in hexadecimal
 *Return: void return
 */
void print_hexa(va_list args)
{
	
}
