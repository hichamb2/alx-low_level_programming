#include "lists.h"
/**
 * free_list - function free list_t
 * @head: the list wich be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
		while (temp->next->next != NULL)
		{
			temp = temp->next;
			if (temp->next->next == NULL)
			{
				free(temp->next);
				temp->next = NULL;
				if (temp->str != NULL)
				{
					free(temp->str);
					temp->str = NULL;
				}
				temp = head;
			}
		}
}
