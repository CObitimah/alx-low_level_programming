#include "main.h"
/**
 *  _print_rev_recursion - function that prints strings in reserve
 *  @s: parameter of strings
 *  Return: string
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}

}
