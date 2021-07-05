#include "holberton.h"
/**
 * _strspn - gets the lenth of a prefix substring.
 * @s: pointer parameter
 * @accept: pointer parameter, value accept
 * Return: count
 */
unsigned int _strspn(char *s, char *accept)
{
int i, length, exist;
length = 0;
while (*s)
{
i = 0 , exist = 0;
while (*(accept + i))
{
if (*(accept + i) == *s)
{
exist = 1;
length++;
break;
}
i++;
}
if (exist == 0)
break;
s++
}
return (length);
}
