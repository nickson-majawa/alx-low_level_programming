#include "holberton.h"
/**
 * _isalpha - checks for letters in lowercase and uppercase
 * @c: the letter to check
 * Return: returns the letters
 */
int _isalpha(int c)
{
return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
