#include "lists.h"
/**
 * free_list - function free list_t
 * @head: the list wich be freed
 */
void free_list(list_t *head)
{
	list_t *temp;

	temp = head;
	if (temp->next != NULL)
	{
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
		if (temp->next == NULL)
		{
			free(temp->str);
			temp->str = NULL;
			free(temp->len);
			temp->len = 0;
		}
	}
}
