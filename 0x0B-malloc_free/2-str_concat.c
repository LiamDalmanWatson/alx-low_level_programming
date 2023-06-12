#include "main.h"
#include <stdlib.h>
/**
 *str_concat - concatenates two strings
 * @s1: string1 to be concat
 * @s2: string2 to be concat
 * Return: pointer to concat_str
 */
char *str_concat(char *s1, char *s2)
{
	char *concat_str;
	size_t irt, cst;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	irt = cst = 0;
	while (s1[irt] != '\0')
		irt++;
	while (s2[cst] != '\0')
		cst++;
	concat_str = malloc(sizeof(char) * (irt + cst + 1));

	if (concat_str == NULL)
		return (NULL);
	irt = cst = 0;
	while (s1[irt] != '\0')
	{
		concat_str[irt] = s1[irt];
		irt++;
	}
	while (s2[cst] != '\0')
	{
		concat_str[irt] = s2[cst];
		irt++;
		cst++;
}
	concat_str[irt] = '\0';
	return (concat_str);
}
