#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strcpy - copies a string pointed to by src,
 * including terminating null byte to buffer poited to by dest
 * @src: pointer to string
 * @dest: pointer to buffer
 * Return: *dest
 */
char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest++ = *src++;
	}

	*dest = '\0';
	return (start);
}
