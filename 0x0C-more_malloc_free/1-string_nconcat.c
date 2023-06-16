#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - concatenates n bytes of two strings
 * @s1: string one to append to
 * @s2: string two to concatenate from
 * @n: number of bytes
 * Return: pointer to concatenated string with newly allocated memory,
 * which contains s1 and the first n bytes of s2 and is null terminated
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, j = 0, len1 = 0, len2 = 0;

	while (s1 != NULL && s1[len1] != '\0')/*calculates length of s1*/
	{
		len1++;
	}
	while (s2 != NULL && s2[len2] != '\0')/*calculates length of s2*/
	{
		len2++;
	}
	if (n < len2)
		str = malloc(sizeof(char) * (len1 + n + 1));/*malloc for new str*/
	else
		str = malloc(sizeof(char) * (len1 + len2 + 1));
	if (str == NULL)/*checks for failure of malloc*/
		return (NULL);
	for (i = 0; i < len1; i++)
		str[i] = s1[i];/*copies s1 to new str*/
	if (n < len2)
		while (j < n)/*concatenates n bytes of s2 to new str*/
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	else
		while (j < len2)
		{
			str[i] = s2[j];
			i++;
			j++;
		}
	str[i] = '\0';/*adds null terminator to new str*/
	return (str);/*pointer to new str*/
}
