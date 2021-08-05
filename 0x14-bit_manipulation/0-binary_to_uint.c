#include "holberton.h"

/**
 * binary_to_uint - converts binary to unsogned int
 * @b: points to string of 0 and 1 chars
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
int len;
unsigned int number = 0, mult = 1;
if (!b)
return (0);
for (len = 0; b[len];)
len++;
for (len -= 1; len >= 0; len--)
{
if (b[len] != '0'&& b[len] != '1')
return (0);
number += (b[len] - '0') * mult;
mult *= 2;
}
return (number);
}
