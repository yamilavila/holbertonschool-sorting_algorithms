#include "sort.h"

/**
 * insertion_sort_list - sorts a doubly linked list of int in ascending order
 * @list: list sorted
 */

void insertion_sort_list(listint_t **list)
{
	listint_t *tmp;
	listint_t *count;
	listint_t *node;

	if (list == NULL || (*list)->next == NULL || !(*list))
		return;

	count = (*list)->next;
	while (count != NULL)
	{
		if (count->prev != NULL)
		{
			if (count->n < count->prev->n)
			{
				tmp = count->prev;
				node = count->next;
				count->prev = tmp->prev;
				count->next = tmp;
				if (count->prev != NULL)
					count->prev->next = count;

				tmp->prev = count;
				tmp->next = node;
				if (node != NULL)
					node->prev = tmp;
				if (count->prev == NULL)
					*list = count;

				print_list(*list);
			}
			else
				count = count->next;
		}
		else
			count = count->next;
	}
}
