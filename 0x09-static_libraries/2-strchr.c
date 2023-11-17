#include "main.h"

/**
 * _strchr - function that locates character in strings
 * @s: character in strings
 * @c: locate character
 *
 * Return: If c is found.
 * If c is not found - null
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
