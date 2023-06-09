#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * _strspn - gets the length of a prefix substring
 * @s: initial segment
 * @accept: bytes
 *Return: number of bytes in initial segment of s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int init_len = 0;
	unsigned int len1 = strlen(s);
	unsigned int len2 = strlen(accept);
	unsigned int i, j;

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (j = 0; j < len2; j++)
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		if (!found_match)
		{
			break;
		}
		else
		{
			init_len++;
		}
	}
	return (init_len);
}
