#include "holberton.h"

/**
 * _strcat - concatnates two strings together
 * @src: String to concatenate
 * @dest: String to concatenate to
 * Return: dest
 */
char *_strcat(char *dest, char *src)
{
int i, srcLength, destLength;
i = 0, destLenth = 0, srcLength = 0;
while (*(dest + i))
{
destLength++;
i++;
}
i = 0;
while (*(src + i))
{
srcLength++;
i++;
}
for (i = 0; i < srcLength; i++)
{
*(dest + desLength + i) = *(src + i);
}
return (dest);
}
