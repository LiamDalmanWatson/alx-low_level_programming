#include <stdio.h>
#include <stdlib.h>
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
{
		printf("Error\n"0);
	return (1);
}
	/*convert arguments to integers*/
	i = atoi(argv[1]);
	j = atoi(argv[2]);
	result = i * j;
	/*print result*/
	printf("%d\n", result);
	return (0);
}
