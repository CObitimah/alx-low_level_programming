#include "lists.h"

#include <stdio.h>
#include <stdlib.h>

/**
 * sum_dlistint - function that returns the of all the data (n) of a
 * dlistint_t linked list
 * @head: head of the list
 * Return: 0 if the list is empty
 */
int sum_dlistint(dlistint_t *head)
{
	int sum;

	sum = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
