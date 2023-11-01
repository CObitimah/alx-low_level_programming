#include "main.h"

/**
 * _isalpha - function that checks for alphabetic character
 * @c: lowercase
 * Return: (1) if c is a letter otherwise (0)
 */
int _isalpha(int c)
{
	char lower, upper;
	int letter = 0;

	for (lower = 'a'; lower <= 'z'; lower++)
	{
		for (upper = 'A'; upper <= 'Z'; upper++)
		{
			if (lower == c || upper == c)
			{
				letter = 1;
			}
		}
	}
	return (letter);
}
