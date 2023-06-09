#include "main.h"
#include <stdio.h>

/**
* main - a function that peints its name, followed by a new line
* @argc: the number of commands passed to program
* @argv: an array of pointers which are the arguments passed to the program
* Return: Always 0
*/
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
