#include <stdio.h>
#include "dog.h"

/**
 * print_dog - prints a struct dog
 * @d: dog structure
 * Return: void
 */
void print_dog(struct dog *d)
{
if (d)
{
if (!d->name)
d->name = "(nill)";
if (!d->owner)
d->owner = "(nill)";
printf("Name: %s\nge: %f\nOwner: %s\n", d->name, d->age, d->owner);
}
}
