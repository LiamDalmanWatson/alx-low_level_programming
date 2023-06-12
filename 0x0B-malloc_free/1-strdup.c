#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strlen - prints the length of a string
 * @s: string as input
 * Return: nothing.
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s++)
	{
		i++;
	}
	return (i);
}

/**
 * _strdup - returns a pointer to a new string which is a dup of the string
 * str. Memory for the new string is obtained with malloc, and freed with free
 * @str: string to be duplicated
 *
 * Return: pointer to duplicated string, or NULL if str = NULL(no mem)
 */
char *_strdup(char *str)
{
	char *nstr;
	int i;/*itterator for new string*/

	if (str == NULL)
	{
		return (NULL);
	}

	i = 0;
	nstr = (char *)malloc(sizeof(char) * (_strlen(str) + 1));
	/*nstr gets assigned memory and multiplies it with char of str to dup*/
	if (nstr == NULL)/*checks if malloc worked*/
	{
		return (NULL);/*returns NULL if false*/
	}
	while (*str)
	{
		nstr[i++] = *str++;/*itterates both and copies along*/
	}
	nstr[i] = '\0';
	return (nstr);/*pointer to new str*/
}
