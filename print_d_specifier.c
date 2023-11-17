#include "main.h"
/**
 * d_specifier - prints %d
 * @format: content thta may contain %d
 */
void d_specifier(const char *format, ...)
{
	format++;
	switch (*format)
	{
		case 'd':
		case 'i':
			print_integer(va_args(arguments, int));
			break;
		default:
			_putchar('%');
			break;
	}
}
