#include "main.h"

/**
 * _puts_recursion - this function prints a string, and it is followe ny a new line.
 * @s: points at the address of the string to be printed
 */

void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
	else
		_putchar('\n');
}