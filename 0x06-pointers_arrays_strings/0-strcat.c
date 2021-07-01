#include "holberton.h"

/**
 * _strcat - concatnates two strings together
 * @src: String to concatenate
 * @dest: String to concatenate to
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, j, y, x;
i = 0, j = 0, y = 0, x = 0;
while (src[i])
{
i++;
}
while (dest[j])
{
j++;
}
i += j;
for (y = j; y < i; y++)
{
dest[y] = src[x];
x++;
}
return (dest);
}
