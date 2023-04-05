#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * free_listint - Frees a singly linked list of integers.
 * @head: Pointer to the head node of the list.
 */
void free_listint2(listint_t **head)
{
listint_t *current, *next_node;
if (head == NULL)
{
return;
}
while (current != NULL)
{
next_node = current->next;
free(current);
current = next_node;
}
*head = NULL;
}
