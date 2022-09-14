#include "main.h"
/**
 * print_alphabet_x10 - function to print abc 10 times
 *
 * Return: 0
 */
void print_alphabet_x10(void)
{
	char e, i;

	for (i = 0; i <= 9; i++)
	{
		for (e = 'a'; e <= 'z'; e++)
		{
			_putchar(e);
		}
		_putchar('\n');
	}
}
