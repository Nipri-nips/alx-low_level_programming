#include <stdio.h>
#include "main.h"

/**
* main - a program that prints its name, followed by a new line
* @argc: number of command line arguments
* @argv: points to array containing arguments
* Return: 0 on success
*/

int main(int argc, char *argv[])
{
if (argc > 0)
printf("%s\n", argv[0]);

return (0);
}
