#include <stdio.h>
#include "main.h"
/**
* main - a program that prints the number of arguments passed into it.
* @argc: counts number of command line arguments
* @argv: points to array of arguments
* Return: 0 on success
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
if (argc > 0)
printf("%d\n", argc - 1);

return (0);
}
