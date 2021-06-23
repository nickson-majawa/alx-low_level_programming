#include "holberton.h"
/**
 * print_last_digit - prints last digit of a number
 * @n: the int value to extract the last digit from
 * Return: returns  last digit
 */
int print_last_digit(int n)
{
int v;
if (n >= 0)
{
v = n % 10; }
else
{
v = -(n % 10);
}
_putchar(v + '0');
return (v);
}
