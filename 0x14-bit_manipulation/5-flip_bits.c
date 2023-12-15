#include "main.h"
#include <stdio.h>

/**
 * flip_bits - function that returns the number of bits you would
 * need to flip to get from one number to another
 * @m: first number
 * @n: another number
 * Return: void
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bitcount = 0;
	unsigned long int current;
	unsigned long int exclussive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		current = exclussive >> i;
		if (current & 1)
			bitcount++;
	}
	return (bitcount);
}
