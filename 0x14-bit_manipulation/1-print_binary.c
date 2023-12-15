#include "main.h"
#include <stdio.h>
/**
 * _pow - function that calculates base and power
 * @base: base of the exponent
 * @power: power of the exponent
 * Return: value
 */
unsigned long int _pow(unsigned int base, unsigned int power)
{
	unsigned long int numb;
	unsigned int i;

	numb = 1;
	for (i = 1; i <= power; i++)
		numb *= base;
	return (numb);
}


/**
 * print_binary - function to print the binary representation of a number
 * @n: binary number
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _pow(2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

