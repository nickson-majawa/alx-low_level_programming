#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of bytes
 * @s: pointer parameter
 * @accept: pointer parameter
 * Return: s variable
 */
char *_strpbrk(char *s, char *accept)
{
int i;
while (*s)
{
i = 0;
while (*(accept + i))
{
if (*(accept + i) == *s)
return (s);
i++;
}
s++;
}
return (NULL);
}
