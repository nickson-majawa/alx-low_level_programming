#include "holberton.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 * Ends with a new line
 */
void print_alphabet_x10(void)
{
char alp;
int i;
for (i = 0; i <= 9; i++)
{
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
