#include "main.h"
/**
 * _putchar - given character
 *
 *  @c: char input
 *  Return: Always 1
 */
int _putchar(char c)
{
	return(write(1, &c ,1));
}
