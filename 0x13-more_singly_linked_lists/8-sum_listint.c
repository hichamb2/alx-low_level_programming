#include "lists.h"
/**
 * sum_listint - function that calculats the sum 
 * of all the data (n) of a listint_t linked list.
 * @head: the head of linked list
 * Return: the sum of all data of list and if the list is
 * embty return 0
 */
int sum_listint(listint_t *head)
{
	listint_t *temp;
	int sum = 0;

	if (head != NULL)
	{
		temp = head;
		while (temp)
		{
			sum += temp->n;
			temp = temp->next;
		}
	}
	return (sum);
}
