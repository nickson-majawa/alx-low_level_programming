#include "holberton.h"
/**
 * puts_half - prints second half ofthe string
 * @str: string
 * Return: void
 */
void puts_half(char *str)
{
int len, i, half;
len = strlen(str);
half = (len % 2 == 0) ? len / 2 : (len - 1) / 2 + 1;
for (i = half; i < len; i++)
_putchar(*(str + i));
_putchar('\n');
}
