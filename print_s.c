#include "main.h"
/**
 * printf_string - print astring.
 * @k: argument.
 * Return: the length of string
 */
int printf_string(va_list k)
{
	char *str;
	int i;
	int length;

	str = va_arg(k, char *);
	if (str == NULL)
	{
		str = '\0';
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
