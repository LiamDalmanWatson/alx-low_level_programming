#include "main.h"
#include <string.h>

/**
 * _strncat - concatenates n characters of two strings
 * @dest: destination string input
 * @src: source string input
 * @n: number of characters
 * Return: pointer to resulting dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}
