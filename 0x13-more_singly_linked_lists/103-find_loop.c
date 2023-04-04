#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: pointer to the head of the list
 * Return: the address of the node where the
 * loop starts, or NULL if there is no
 * loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tmp, *tmp2;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp)
	{
		tmp2 = tmp->next;
		while (tmp2)
		{
			if (tmp2 == tmp)
				return (tmp);
			tmp2 = tmp2->next;
		}
		tmp = tmp->next;
	}

	return (NULL);
}
