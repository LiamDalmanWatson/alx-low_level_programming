#include "main.h"
/**
 * _strlen - prints the length of a string
 * @s: input
 * Return: Nothing
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s != '\0')
	{
		len++;/* This keeps incrementing len */
		s++;
	}
	return (len);
}
