#include "main.h"
#include <stdlib.h>

/**
 * _memset - set n bytes of memory block pointed to by s by b
 * @s: pointer to memory area
 * @b: constant byte
 * @n: number of bytes
 * Return: pointer to memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int ind;

	for (ind = 0; ind < n; ind++)
	{
		s[ind] = b;
	}
	return (s);
}

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of array elements
 * @size: size of each element
 * Return: pointer to allocated mem
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;

	if (nmemb == 0 || size == 0)/*checks if nmemb or size is NULL*/
	{
		return (NULL);/*returns NULL if true*/
	}
	ptr = malloc(nmemb * size);/*malloc for the array*/
	if (ptr == NULL)/*checks if allocation was succesful*/
	{
		return (NULL);/*returns NUll if it fails*/
	}
	_memset(ptr, 0, nmemb * size);/*set the memory to zero*/
	return (ptr);/*returns a pointer to allocated memory*/
}
