#include "main.h"
/**
 * reverse_array - function that reverses the content of an array of integers
 * @a:  an array of integer
 * @n: value
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		t = a[i];
		a[i] = a[n];
		a[n] = t;
	}
}

