#include "sort.h"

/**
*insertion_sort_list - a function that sorts a doubly linked
*list of integers in ascending order using
*the Insertion sort algorithm
*@list: a doubly linked list
*/
void insertion_sort_list(listint_t **list)
{
	listint_t *curr, *temp, *prev, *next, *head;

	if (!list || !(*list) || !(*list)->next)
		return;
	curr = (*list)->next;
	head = (*list);

	while (curr)
	{
		temp = curr;

		while (temp->prev && temp->n < temp->prev->n)
		{
			next = temp->prev;
			prev = temp;
			if (prev->next)
				prev->next->prev = next;
			if (next->prev)
				next->prev->next = prev;
			else
				*list = prev;

			prev->prev = next->prev;
			next->next = prev->next;
			prev->next = next;
			next->prev = prev;
			print_list(head);
		}
		curr = curr->next;
	}
	*list = head;
}
