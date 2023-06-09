#include "main.h"
#include <string.h>
/**
 * _strcat - Concatenates two strings
 * @dest: destination
 * @src: source input
 * Return: pointer to resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	size_t i = 0, j = 0;

	while (dest[i] != '\0')/*finds end of dest*/
	{
		i++;
	}
	while (src[j] != '\0')/*concatenate src to dest*/
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';/*adds null byte*/
	return (dest);
}
