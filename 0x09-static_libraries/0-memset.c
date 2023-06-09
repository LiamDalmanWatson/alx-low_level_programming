#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _memset - sets n bytes of memory block
 * pointed to by s by b
 * @n: number of bytes
 * @s: pointer to memory area
 * @b: constant byte
 *
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
		s[ind] = b;
	}
	return (s);
}
