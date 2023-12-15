#include "main.h"
#include <stdio.h>

/**
 * get_bit - function that returns the value of a bit at a given index
 * @n: value of the bit
 * @index: index of the bit
 * Return: index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check, divisor;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	divisor = 1 << index;
	check = n & divisor;
	if (check == divisor)
		return (1);
	return (0);
}
