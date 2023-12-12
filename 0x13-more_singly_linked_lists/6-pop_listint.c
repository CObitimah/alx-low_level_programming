#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * pop_listint - function that deletes the head nodes
 * @head: pointer to the head node
 * Return: 0 if the function is empty. whiles address
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int n;

	if (head == NULL || *head == NULL)
		return (0);

	tmp = *head;
	*head = tmp->next;
	n = tmp->n;
	free(tmp);
	return (n);
}
