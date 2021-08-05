#include "holberton.h"

/**
 * _pow_recursion - returns value of x power of y
 * @x: parameter int
 * @y: parameter int
 * Return: pow number
 */
int _pow_recursion(int x, int y)
{
if (y > 0)
return (_pow_recursion(x, y - 1) * x);
else if (y == 0)
return (1);
else
return (-1);
}
/**
 * _strlen_recursion - returns the length of string
 * @s: pointer paramter 
 * Return: count size
 */

int _strlen_recursion(const char *s)
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
/**
 * binary_to_uint - converts binary to unsogned int
 * @b: points to string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int i = 0, len = 0;
unsigned int number = 0;
if (!b)
return (0);
len = _strlen_recursion(b) - 1;
while (b[len])
{
if (b[len] == '0')
number += 0;
else if (b[len] == '1')
number += _pow_recursion(2, i);
else
return (0);
len--;
i++;
}
return (number);
}
