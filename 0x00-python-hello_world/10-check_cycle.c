#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has list
 * @list: pointer to the list
 * Return: 0 || 1
 */

int check_cycle(listint_t *list)
{
	listint_t *ppr;
	listint_t *prev;

	ppr = list;
	prev = list;
	while (list && ppr && ppr->next)
	{
		list = list->next;
		ppr = ppr->next->next;

		if (list == ppr)
		{
			list = prev;
			prev =  ppr;
			while (1)
			{
				ppr = prev;
				while (ppr->next != list && ppr->next != prev)
				{
					ppr = ppr->next;
				}
				if (ppr->next == list)
					break;

				list = list->next;
			}
			return (1);
		}
	}

	return (0);
}
