#include "holberton.h"
/**
 * *_strcpy - copies the sting pointed to by the source
 * @dest: char type string
 * @src: char type
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
int i = -1;
do
{
i++;
dest[i] = src[i];
}
while (src[i] != '\0');
return (dest);
}
