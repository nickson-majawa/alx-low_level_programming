#include "holberton.h"
/**
 * _strlen_recursion - returns the lenth of a string
 * @s: pointer parameter character
 * Return: count size
 */
int _strlen_recursion(char *s)
{
int count = 0;
if (*s)
{
count++;
return (count + _strlen_recursion(s + 1));
}
else
{
return (count);
}
}
