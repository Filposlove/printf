#include "main.h"
/**
 * _printf - mimcs printf
 * @format: iddentifier look for
 * Return: integer
 */
int _printf(const char *format, ...)
{
	match m[] = {
		{"%c", printf_char}, {"%s", printf_string}, {"%%", print_13}, {"%d", print_dec}, {"%i", print_int}, {"%r", printf_revs}, {"%R", print_rot13}, {"%b", print_bin}, {"%u", print_unsigned}, {"%o", print_oct}, {"%x", print_hex}, {"%S", print_exc_string}, {"%p", print_pointer}
	};
	va_list args;
	i = 0, len =0;

	}
}
