#include "main.h"
#include <stdio.h>

/**
 * set_bit - function that sets the value of a bit to 1 at a given index
 * @n: value of the bit
 * @index: given index of the bit
 * Return: 1 if it worked or -1 if an error occured
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int bitset;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	bitset = 1 << index;
	*n = *n | bitset;
	return (1);
}
