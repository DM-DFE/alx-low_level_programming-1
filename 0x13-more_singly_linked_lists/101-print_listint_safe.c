#include "lists.h"

/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to the head of the list
 * Return: the number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head) {
	size_t i = 0;
	const listint_t *tmp;

	if (head == NULL)
		exit(98);

	while (head)
	{
		printf("[%p] %d\n", (void *)head, head->n);
		tmp = head;
		head = head->next;
		i++;
		while (tmp)
		{
			if (tmp <= head)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				return (i);
			}
			tmp = tmp->next;
		}
	}

	return (i);
}
