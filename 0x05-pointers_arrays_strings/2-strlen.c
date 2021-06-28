#include "holberton.h"
/**
 * _strlen - returns the length of a string
 * @s: the character to measure the length on
 * Return: returns length
 */
int _strlen(char *s)
{
int i, len;
i = 0;
len = 0;
while ((int)*(s + i))
{
len++;
i++;
}
return (len);
}
