Skip to content
Karlie-crypto
/
alx-low_level_programming
Public
Code
Issues
Pull requests
Actions
Projects
Security
More
alx-low_level_programming/0x01-variables_if_else_while/1-last_digit.c
@Karlie-crypto
Karlie-crypto Last digit
 History
 1 contributor
36 lines (32 sloc)  607 Bytes
#include <stdio.h>

#include <time.h>

#include <stdlib.h>
/**
 * main - main block
 * Description: Get a random number and print the number
 * positive,nagetive or zero
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;
	int last;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, last);
	}
	else
	{
		if (last > 5)
		{
			printf("Last digit of %d is %d and is greater than 5\n", n, last);
		}
		else if (last < 6)
		{
			printf("Last digit of %d is %d and is less than 6 and not 0\n", n, last);
		}
	}	return (0);
}
