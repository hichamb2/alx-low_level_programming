#include "lists.h"
/**
 * print_list - print function
 * @h: the list
 * Return: nul of nds
 */
size_t print_list(const list_t *h)
{
	list_t *temp;
	int count = 0;

	temp = (list_t *) h;
	while (temp != NULL)
	{
		if (temp->str)
			printf("[%d] %s\n", temp->len, temp->str);
		else
			printf("[%d] %s\n", 0, "(nil)");
		count++;
		temp = temp->next;
	}
	return (count);
}
