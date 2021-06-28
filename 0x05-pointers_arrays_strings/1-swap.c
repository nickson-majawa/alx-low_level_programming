#include "holberton.h"
/**
 * swap_int - swaps values of two integers
 * @a: first integer
 * @b: second  integer
 * Return: returns 0
 */
void swap_int(int *a, int *b)
{
int x, y;
x = *a;
y = *b;
 
*a = y;
*b = x;
}
