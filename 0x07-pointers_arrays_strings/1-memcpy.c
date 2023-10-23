#include "main.h"

/**
 * _memcpy - function that copies memory area
 * @n: copy files
 * @src: memory bytes area
 * @dest: memory area
 *
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}

	return (dest);
}
