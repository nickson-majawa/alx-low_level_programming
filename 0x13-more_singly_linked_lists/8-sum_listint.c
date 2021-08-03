#include <stdio.h>
#include "lists.h"

/**
 * sum_listint - returns sum of all data of  linked list
 * @head: linked list type listint_t
 * Return: sum of ll data
 */
int sum_listint(listint_t *head)
{
int sum = 0;
if (!head)
return (sum);
while (head)
{
sum += head->n;
head = head->next;
}
return (sum);
}
