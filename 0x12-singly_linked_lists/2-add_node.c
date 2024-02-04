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
	int len = 0;
	char *s;

	if (str == NULL)
		len = 0;
/**	while (str[len] != '\0')
		len++;*/
	s = strdup(str);
	len = _strlen(s);
	temp = (list_t *)malloc(sizeof(list_t));
	if (temp == NULL)
	{
		free(s);
		return (NULL);
	}
	temp->str = s;
	temp->len = len;
	temp->next = *head;
	*head = temp;
	return (*head);
}
