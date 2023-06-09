#include "main.h"
#include <string.h>

/**
 * _memcpy - copies a memory area
 * @src: source to be copied from
 * @n: bytes to copy
 * @dest: memory area to be copied to
 *
 *Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int value;

	for (value = 0; value < n; value++)
		dest[value] = src[value];

	return (dest);
}
