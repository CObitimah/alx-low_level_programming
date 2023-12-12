#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * sum_listint - function that returns sum of data
 * @head: pointer of the node
 * Return: zero
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
