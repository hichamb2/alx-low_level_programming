#include "lists.h"
/**
 * print_list - print function
 * @h: the list
 * Return: nul of nds
 */
size_t print_list(const list_t *h)
{
	size_t n = 0;
	const list_t *ptr = h;

	if (ptr->str == NULL)
	{
		printf("[0] (nil)");
	}
	while (ptr != NULL)
	{
		printf("[%u] %s", ptr->len, ptr->str);
		printf("\n");
		ptr = ptr->next;
		n++;
	}
	return (n);
}
