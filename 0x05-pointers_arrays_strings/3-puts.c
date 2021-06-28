#include "holberton.h"
/**
 * _puts -prints string followed by new line
 * @str: the string to be printed out
 * Return: void
 */
void _puts(char *str)
{
  int i;
  i = 0;
  while (*(str + i))
    {
      _putchar(str[i]);
      i++;
    }
  _putchar('\n');
}
