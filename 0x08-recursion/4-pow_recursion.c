#include "main.h"
#include <stdio.h>

/**
 * _pow_recursion - returns the calue of x raised to the power of y
 *@x: value to be raised by y
 *@y: value to raise to x
 *
 *Return: -1 if y is lower than 0, otherwise return 1
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
	{
		return (1);
	}
	else if (y < 0)
	{
		return (-1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
