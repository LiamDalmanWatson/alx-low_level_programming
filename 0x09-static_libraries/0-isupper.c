#include "main.h"

/**
 * _isupper - shows 1 if c is uppercase, another case shows 0
 * @c: The character in ASCII code
 * Return: 1 for uppercase character. 0 for the rest.
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
