#include "main.h"
#include <stdlib.h>


/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: input
 * Return: 0
 */

void *malloc_checked(unsigned int b)
{
	void *memall;

	memall = malloc(b);
	if (memall == NULL)
		exit(98);
	return (memall);
}
