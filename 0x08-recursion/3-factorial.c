#include "main.h"
#include <stdio.h>

/**
 * factorial - returns the factorial of a given number
 *@n: number input
 *Return: 0 if true, otherwise -1 to indicate error
 *
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
