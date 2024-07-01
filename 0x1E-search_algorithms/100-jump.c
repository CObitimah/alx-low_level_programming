#include <stdio.h>
#include <math.h>
#include "search_algos.h"

/**
* jump_search - Searches for a value in a sorted array of integers
* using the Jump search algorithm.
* @array: Pointer to the first element of the array to search in.
* @size: Number of elements in the array.
* @value: The value to search for.
* Return: The first index where value is located, or -1 if value
* is not present or array is NULL.
*/
int jump_search(int *array, size_t size, int value)
{
size_t step = sqrt(size);
size_t prev = 0;
size_t next = step;
size_t i;

if (array == NULL)
return (-1);

while (next < size && array[next] < value)
{
printf("Value checked array[%lu] = [%d]\n", next, array[next]);
prev = next;
next += step;
}

printf("Value found between indexes [%lu] and [%lu]\n", prev, next);

for (i = prev; i < size && i <= next; i++)
{
printf("Value checked array[%lu] = [%d]\n", i, array[i]);
if (array[i] == value)
return (i);
}
return (-1);
}
