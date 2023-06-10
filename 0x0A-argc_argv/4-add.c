#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <ctype.h>
/**
 * main - a program that adds positive numbers
 * @argc: number of command line arguments passed
 * @argv: an array of pointers as arguments passed
 *1
 * if no input is provided, print "0" followed by \n
 * if the input contains a non-digit print "Error" followed by \n
 * otherwise proceed to next step.
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int sum, i, j;

	sum = 0;

	if (argc == 1)
	{
		/*if no input is provided, prints 0 followed by a newline*/
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		/*checks if input contains non-digits*/
		for (j = 1; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);
}
