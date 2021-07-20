#include <stddef.h>

/**
 * array_iterator - executes a function as a parameter
 * @array: array integer
 * @size: size of array
 * @action: pointer to function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
unsigned int i;
if (action && array)
{
for (i = 0; i < size; i++)
action(array[i]);
}
}
