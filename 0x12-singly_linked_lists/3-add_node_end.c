#include "lists.h"
/**
 * add_node_end - add element to the end of list
 * @head: address of first element at list
 * @str: string
 * Return: pointer to new element
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = (list_t *) malloc(sizeof(list_t));
	list_t *cur = *head;
	unsigned int i = 0;

	if (!new)
		return (NULL);
	while (str[i])
		i++;
	new->str = strdup(str);
	new->len = i;
	new->next = NULL;

	if (!(*head))
	{
		*head = new;
		return (new);
	}
	while (cur->next)
		cur = cur->next;
	cur->next = new;
	return (new);
}
