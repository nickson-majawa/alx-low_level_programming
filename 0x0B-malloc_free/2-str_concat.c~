#include <stdlib.h>

/**
 * _strdup - returns pointer to new space in memory
 * @str: pointer character
 * Return: pointe value
 */
char *_strdup(char *str)
{
char *ptr;
int len = 0, i = 0;
if (str == NULL)
return (NULL);
while (str[len])
len++;
ptr = malloc((sizeof(*ptr) * len) +1);
if (!(ptr == NULL))
{
for (i = 0; i < len; i++)
ptr[i] = str[i];
return (ptr);
}
else
return (NULL);
}
