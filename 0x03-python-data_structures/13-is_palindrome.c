#include"lists.h"
#include <stdlib.h>

/**
 * is_palindrome - Checks if a singly linked list is a palindrome.
 * @head: Pointer to the head of the linked list.
 * Return: 0 if not a palindrome, 1 if a palindrome.
 */

int is_palindrome(listint_t **head)
{
	int is_p = 1;
	listint_t *slow = *head, *fast = *head, *prev = NULL, *tmp;

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
