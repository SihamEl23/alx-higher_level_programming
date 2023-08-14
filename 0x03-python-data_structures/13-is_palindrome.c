#include"lists.h"
#include <stdlib.h>

int is_palindrome(listint_t **head)
{
	int is_p = 1;
	listint_t *slow = *head;
	listint_t *fast = *head;
	listint_t *prev = NULL;
	listint_t *tmp;
	
	if (*head == NULL)
		return (1);
	while (fast != NULL && fast->next != NULL)
	{
		fast = fast->next->next;
		tmp = slow->next;
		slow->next = prev;
		prev = slow;
		slow = tmp;
	}
	if (fast != NULL)
		slow = slow->next;
	while (prev != NULL && slow != NULL)
	{
		if (prev->n != slow->n)
		{
			is_p = 0;
			break;
		}
		prev = prev->next;
		slow = slow->next;
	}
	prev = NULL;
	while (*head != NULL)
	{
		tmp = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = tmp;
	}
	return (is_p);
}
