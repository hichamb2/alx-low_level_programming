#include "lists.h"
/**
 * _strlen - function calculat the strlen of str
 * @str: the string input
 * Return: return the number of character in str
 */
int _strlen(char *str)
{
	int i = 0;

	while (str[i] != '\0')
		i++;
	return (i);
}

/**
 * add_node - print function
 * @head: the list
 * @str: the string wich added
 * Return: nul of nds
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	char *s = strdup(str);
	int len;

	temp = (list_t *)malloc(sizeof(list_t));
	if (!temp)
		return (NULL);
	if (str == NULL)
		len = 0;
	else
		len = _strlen(s);
	temp->str = s;
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
