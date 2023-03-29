#include "main.h"
#include <stdarg.h>

/**
 * _printf - prints everything
 * @format: possible valid format specifier
 * Return: 0
 */


int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);
    vprintf(format, args);
    va_end(args);
}
