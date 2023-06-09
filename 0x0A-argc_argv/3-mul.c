#include <stdio.h>
#include "main.h"

/**
 * main - a program that multiplies two numbers
 * @argc: number of commands passed to program
 * @argv: array of pointers passed to progrm
 * Return: Always 0
 */
int main(int argc, char **argv)
{
	int i, j, result;

	i = 0;
	j = 0;
	/*check that two arguments were passed*/
	if (argc != 3)
		printf("Usage: %s <num1> <num2>\n", argv[0]);
	return (1);

	/*convert arguments to integers*/
	i = argv[1];
	j = argv[2];
	result = i * j;
	/*print result*/
	while (i != 0 && j != 0)
	{
		_putchar(result);
		break;
	}
	return (0);
}
