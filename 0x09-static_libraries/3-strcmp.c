#include "main.h"
#include <string.h>
/**
 * _strcmp - compares *s1 and *s2
 * @s1: string to be compared to s2
 * @s2: string to be compared to s1
 * Return: s1[i] - s2[i]
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
		return (s1[i] - s2[i]);
		}
		i++;
	}
	return (0);
}
