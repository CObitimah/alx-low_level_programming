#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function that searches for integers
 * @array: array of integer
 * @size: size of array
 * @cmp: pointer to function to be used to compare value
 * Return: int elements match  -1 if size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;

	if (array == NULL || cmp == NULL)
		return (-1);
	for (a = 0; a < size; a++)
	{
		if (cmp(array[a]) != 0)
			return (a);
	}
	return (-1);
}
