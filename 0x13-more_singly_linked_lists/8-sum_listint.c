#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - calculates the sum of all the data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: resulting sum
 */
int sum_listint(listint_t *head)
{
int result = 0;
listint_t *current_node = head;
while (current_node != NULL)
{
result += current_node->n;
current_node = current_node->next;
}
return (result);
}
