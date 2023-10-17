#include "main.h"
/**
 * _printf - print to formated code
 *
 * @format: format specifier
 *  Return: no of bytes printed
 */
int _printf(const char *format, ...)
{
	unsigned int i, s_count, count = 0;

	va_list args;
		va_start(args, format);
		for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
		{
			my_putchar(format[i]);
		}
		else if (format[i + 1] == 'c')
		{
			my_putchar(va_arg(args, int));
				i++;
		}
		else if (format[i + 1] == 's')
		{
			s_count = strong(va_arg(args, char *));
			i++;
			count += (s_count - 1);
		}
		else if (format[i + 1] == '%')
		{
			my_putchar('%');
		}
		count++;

	}
	va_end(args);
	return (count);

}
