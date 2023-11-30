#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_name - main function
 * @name: name of the person
 * @f: variable that hold a string
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}
