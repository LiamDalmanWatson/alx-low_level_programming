#include "main.h"
#include <string.h>
#include <stdio.h>
/**
 * _strstr - locates a substring
 * @needle: substring to find
 * @haystack: string to search
 * Return: *haystack or NULL if error
 */
char *_strstr(char *haystack, char *needle)
{
	int needle_length = strlen(needle);

	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack != '\0')
	{
		if (strncmp(haystack, needle, needle_length) == 0)
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
