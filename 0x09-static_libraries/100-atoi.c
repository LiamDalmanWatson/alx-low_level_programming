#include "main.h"

/**
 * _atoi - converts a string to an integer
 * @s: string to be converted
 * Return: int converted from string
 */
int _atoi(char *s)
{
	int i, e, r, len, d, digit;

	i = 0;
	e = 0;
	r = 0;
	len = 0;
	d = 0;
	digit = 0;

	while (s[len] != '\0')
	{
		len++;
	}
	while (i < len && d == 0)
	{
		if (s[i] == '-')
			e++;
		if (s[i] >= '0' && s[i] <= '9')
		{
			digit = s[i] - '0';
			if (e % 2)
				digit = -digit;
			r = r * 10 + digit;
			d = 1;
			if (s[i + 1] < '0' || s[i + 1] > '9')
				break;
			d = 0;
		}
		i++;
	}
	if (d == 0)
	{
		return (0);
	}
	return (r);
}
