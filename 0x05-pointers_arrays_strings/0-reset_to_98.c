#include "holberton.h"
/**
 * reset_to_98 - updates the value it points to 98
 * @*n: the pointer variable name
 * Return: returns the pointer value
 */
void reset_to_98(int *n)
{
int p = 98;
n = &p;
printf("n = %p\n" &n);
return (0);
}
