#include "lists.h"
/**
 * listint_len - function
 * @h: par
 * Return: number of nods
 */
size_t listint_len(const listint_t *h)
{
	size_t val = 0;
	const listint_t *temp = h;

	while (temp != NULL)
	{
		temp = temp->next;
		val++;
	}
	return (val);
}
