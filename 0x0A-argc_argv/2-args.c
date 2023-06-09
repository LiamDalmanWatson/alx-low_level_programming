#include "main.h"
#include <stdio.h>

/**
 * main - a program that prints all arguments it receives
 * @argc: the number of command line arguments paassed to it
 * @argv: an array of pointers as arguments passed to it
 * Return: Always 0
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);/*this prints each argument entered*/
	}
	return (0);
}
