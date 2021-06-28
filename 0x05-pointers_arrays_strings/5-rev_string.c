#include "holberton.h"
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Return: void
 */
void rev_string(char *s)
{
int i, len;
i = 0;
len = 0;
while(*(s + i))
{
len++;
i++;
}
for (i = 0; i < len / 2; i++)
{
char c = *(s +i);
*(s+i) = *(s + len - i - 1);
*(s + len - i - 1) = c;
}
}
