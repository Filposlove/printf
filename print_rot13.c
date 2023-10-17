#include "main.h"
/**
 * print_rot13 - convert to rot13
 * @val: argument
 * Return:
 *
 */
int print_rot13(va_list val)
{
	int i, j, counter = 0;
	int m = 0;
	char *s = va_arg(val, char *);
	char a[] = {abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ}
	char b[] = {nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM}

	if (s == NULL)
		s = "(null)";
	for (i = 0; s[i]; i++)
	{
		m = 0;
		for (j = 0; a[j] && !m; j++)
		{
			if (s[i] == a[j])
			{
				_putchar(b[j]);
				counter++;
				m = 1;
			}
		}
		if (!m)
		{
			_putchar(s[i]);
			counter++;
		}
	}
	return (counter);
}
