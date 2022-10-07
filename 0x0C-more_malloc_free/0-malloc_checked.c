#inlcude "main.h"
/**
 * malloc_checked - a function that allocates memory using malloc.
 * @b: input
 * Return: 0
 */
void *malloc_checked(unsigned int b)
{
	void *memall;

	memall = malloc(b);
	if (mamall == NULL)
		exit(98);
	return (memall);
}
