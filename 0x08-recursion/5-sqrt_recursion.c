#include "main.h"

/**
 * _sqrt_b - natural square root of a number
 * @x: input value
 * @y: input parameter
 * Return: square root or -1
 */
int _sqrt_b(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	return (_sqrt_b(x, y + 1));
}
/**
 * _sqrt_recursion - natural square root of numbers
 * @n: value return
 * Return: string
 */
int _sqrt_recursion(int n)
{
	return (_sqrt_b(n, 0));
}
