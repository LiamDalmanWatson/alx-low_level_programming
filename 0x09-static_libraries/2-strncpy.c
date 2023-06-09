#include "main.h"
#include <string.h>

/**
 * _strncpy - copies a string
 * @dest: destination buffer
 * @src: string source
 * @n: number of characters to copy
 * Return: pointer to resulting destination
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
