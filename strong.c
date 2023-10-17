#include "main.h"
/**
 * strong - print strings
 *
 * @c: string
 * Return: number of bytes
 */
int strong(char *c)
{
	int count = 0;

	if(c)
	{
		for(count = 0; c[count] != '\0' count++)
		{
			my_putchar(c[count]);
		}
	}
	return (count);
}
