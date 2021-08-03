#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints elements of listint_t list
 * @h: linked list type listint_t
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
unsigned int count = 0;
while (h)
{
count++;
printf("%d\n", h->n);
h = h->next;
}
return (count);
}
