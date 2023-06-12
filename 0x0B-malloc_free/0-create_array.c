#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of size size and initialize to char c
 * it with a specific char.
 * @c: the character to be assigned
 * @size: size of an array
 * Description: create an array of size size and assign to char c
 * Return: a pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr;

	arr = malloc(sizeof(char) * size);/*malloc to size*/
	if (size == 0 || arr == NULL)
	{
		return (NULL);/*if the array does not have malloc and size is 0*/
	}
	for (i = 0; i < size; i++)/*iterates over chars*/
	{
		arr[i] = c;/*init to each char of array*/
	}
	return (arr);/*pointer to array if successful*/
}
