#include "holberton.h"
/**
 * print_rev - prints a string in reverse
 * followed by a new line
 * @s: the character used to be reversed
 * Return: void
 */
void print_rev(char *s)
{
int i, len;
i = 0;
len = 0;
while (*(s + i))
{
len++;
i++;
}
for (i = len - 1; i >= 0; i--)
{
_putchar(s[i]);
}
_putchar('\n');
}
