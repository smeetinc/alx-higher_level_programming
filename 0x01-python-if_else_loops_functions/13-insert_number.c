#include "lists.h"

/**
 * insert_node - inserts new node at given index
 * @head: list head
 * @number: index of list
 * Return: addr of new node || NULL
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *a, *b, *c;

	b = *head;
	a = malloc(sizeof(listint_t));
	if (a == NULL)
		return (NULL);
	while (b != NULL)
	{
		if (b->n > number)
			break;
		c = b;
		b = b->next;
	}
	a->n = number;
	if (*head == NULL)
	{
		a->next = NULL;
		*head = a;
	}
	else
	{
		a->next = b;
		if (b == *head)
			*head = a;
		else
			c->next = a;
	}
	return (a);
}
