#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint - Adds a new node at the beginning of a listint_t list
 * @head: A pointer to a pointer to the first node of the list
 * @n: The integer value to be stored in the new node
 *
 * Return: A pointer to the new node, or NULL on failure
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *new_node;
/* Allocate memory for the new node */
new_node = malloc(sizeof(listint_t));
if (new_node == NULL)
return (NULL);
/* Initialize the new node */
new_node->n = n;
new_node->next = *head;
/* Update the head pointer to point to the new node */
*head = new_node;
/* Return a pointer to the new node */
return (new_node);
}