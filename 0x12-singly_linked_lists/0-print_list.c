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

	/**if (ptr->str == NULL)
	{
		printf("[0] (nil)");
	}*/
	while (ptr != NULL)
	{
		if (ptr->str == NULL)
			printf("[0] (nil)\n");
		else
		{
		printf("[%u] %s\n", ptr->len, ptr->str);
		}
		ptr = ptr->next;
		n++;
	}
	return (n);
}
