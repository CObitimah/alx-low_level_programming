#include "main.h"

/**
 * _strpbrk - function to search string for set of bytes
 * @s: searches string
 * @accept: any set of bytes
 *
 * Return: If a set is matched - pointer to the matched bytes.
 * If not - Null
 */

char *_strpbrk(char *s, char *accept)
{
	int index;

	while (*s)
	{
		for (index = 0; accept[index]; index++)
		{
			if (*s == accept[index])
				return (s);
		}

		s++;
	}
	return ('\0');
}
