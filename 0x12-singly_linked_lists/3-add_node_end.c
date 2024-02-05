#include "lists.h"
/**
 * add_node_end - print function
 * @head: the list
 * @str: the string wich added
 * Return: nul of nds
 */
list_t *add_node_end(list_t **head, const char *str)
{
	int len = 0;
	list_t *temp;
	list_t *b = *head;

	if (str == NULL)
		len = 0;
	while (str[len] != '\0')
		len++;
	temp = (list_t *)malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	temp->len = len;
	temp->str = strdup(str);
	temp->next = NULL;
	if (b == NULL)
		*head = temp;
	else
	{
		while (b->next != NULL)
			b = b->next;
		b->next = temp;
	}
	return (*head);
}
