#include "main.h"
/**
 * _strchr - A function that locates a character in a string
 * @s: pointer
 * @c: character
 *
 * Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int v = 0;

	for (; s[v] >= '\0' ; v++)
	{
		if (s[v] == c)
			return (&s[v]);
	}
	return (0);
}
