#include "lists.h"

/**
 * free_listint2 - a function that frees a linked list
 *
 * @head: Pointer to head of linked list
	* Return: Void
 */
void free_listint2(listint_t **head)
{
	listint_t *aux;

	if (head)
	{
		while (*head)
		{
			aux = *head;
			*head = (*head)->next;
			free(aux);
		}
	}
	else
	return;

	free(*head);
	head = NULL;
}
