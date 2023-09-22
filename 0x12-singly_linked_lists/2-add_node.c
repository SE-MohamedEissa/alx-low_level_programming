#include "lists.h"

/**
 * add_node - create new node at first
 * @head: head of list
 * @str: string that will stored at list
 * Return: address of head
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	unsigned int i = 0;

	if (!new)
		return (NULL);
	while (str[i])
		i++;
	new->str = strdup(str);
	new->len = i;
	new->next = *head;
	*head = new;

	return (*head);
}
