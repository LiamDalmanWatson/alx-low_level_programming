#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * is_prime_number - a function that determines if the input is a prime or not
 * @n: input
 *
 * Returns: 1 if n is a prime number, otherwise return 0
 */
int is_prime_number(int n)
{
	int i;

	if (n <= 1)
	{
		return (0);
	}

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}
