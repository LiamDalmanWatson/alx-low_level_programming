#include "main.h"
#include <stdio.h>

/**
 * determine_sqrt - returns the natural square root of n
 * @value: n as input, the value to find the root of
 * @sqroot: the root of the number
 *
 * Return: square root of n, or -1 if none is found
 */
int determine_sqrt(int value, int sqroot)
{
	if ((sqroot * sqroot) == value)/* checks if squared root multiplied by itself is equivalent to value */
	{
		return (sqroot);
	}
	else if (sqroot > (value / 2))/*change that checks is the root is greater than n/2*/
	{
		return (-1);
	}
	else
	{
		/*recursive call to determine sqrt*/
		return (determine_sqrt(value, sqroot + 1));
	}
}

/**
 * _sqrt_recursion - returns the natural square root of n
 * @n: the number to find the square root of
 *
 * Return: the square root of n, or -1 if none is found
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);/* no sqrt found*/
	}
	else if (n == 0 || n == 1)
	{
		return (n);/*square root of 0 or 1, is the same as the value*/
	}
	else
	{
		return (determine_sqrt(n, 1));/* recursive call to determine sqrt*/
	}
}
