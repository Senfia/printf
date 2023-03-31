#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints all
 * @format: valid specifier
 * Return: 0
 */

int _printf(const char *format, ...)
{
	int _chars;
	conver_t f_list[] = {
		{"c", print_char},
		{"s", print_str},
		{"%", print_percent},
		{"d", print_int},
		{"i", print_int},
		{"b", print_binary},
		{"r", print_reversed},
		{"R", rot13},
		{"u", unsigned_integer},
		{"o", print_octal},
		{"x", print_hex},
		{"X", print_heX},
		{NULL, NULL}
	};
	va_list arg_list;

	if (format == NULL)
		return (-1);

	va_start(arg_list, format);
	_chars = parser(format, f_list, arg_list);
	va_end(arg_list);
	return (_chars);
}
