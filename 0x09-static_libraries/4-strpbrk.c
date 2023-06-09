#include "main.h"
#include <string.h>

/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: string 1
 * @accept: string 2
 *
 * Return: pointer to byte in s that
 * matches one of the bytes in accept,
 * or NULL if none is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	if (s == NULL || accept == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		temp = accept;
		while (*temp != '\0')
		{
			if (*s == *temp)
			{
				return ((char *) s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
