#include "main.h"
#include <stdio.h>

/**
 *_puts_recursion - prints a string followed by a newline
 *@s: string input
 *
 *Return: void
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')/*iterates over string till NULL*/
	{
		_putchar('\n');
		return;/*returns void*/
	}
	else
	{
		_putchar(*s);/*prints to console*/
		_puts_recursion(s + 1);
	}
}
