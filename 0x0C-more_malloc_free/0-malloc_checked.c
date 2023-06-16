#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b: number of bytes
 *
 * Return: pointer to allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *memptr;

	memptr = malloc(b);

	if (memptr == NULL)
	{
		exit(98);
	}
	return (memptr);
}
