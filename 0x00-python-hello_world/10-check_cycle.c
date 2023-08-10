#include "lists.h"

/**
 * check_cycle - checks if a linked list loops
 * @list: linked list
 * Return: 1 if linked list loops, 0 if it doesn't
 */

int check_cycle(listint_t *list)
{
	listint_t *current = list;
	listint_t *runner = list;

	if (list == NULL)
		return (0);

	while (runner != NULL && runner->next != NULL)
	{
		current = current->next;
		runner = runner->next->next;

		if (current == runner)
			return (1);
	}
	return (0);
}
