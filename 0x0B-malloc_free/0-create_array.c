#include <stdlib.h>

/**
 * create_array - creates array of chars
 * @size: size of memory
 * @c: character parameter
 * Return: pointe value
 */
char *create_array(unsigned int size, char c)
{
char *ptr;
unsigned int i = 0;
if (size)
{
ptr = malloc(sizeof(*ptr) * size);
if (ptr != 0)
{
for (i = 0; i < size; i++)
ptr[i] = c;
}
return (ptr);
}
else
return (0);
}
