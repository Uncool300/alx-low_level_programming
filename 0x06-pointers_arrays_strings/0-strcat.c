#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 * @src: source string
 * Return: destionation string (char *ptr)
 */

char *_strcat(char *dest, char *src)
{
int len1, len2, i;

for (len1 = 0; dest[len1] != '\0'; len1++)
{
}
for (len2 = 0; src[len2] != '\0'; len2++)
{
}
for (i = 0; i <= len2; i++)
{
	dest[len1 + i] = src[i];
}
return (dest);
}
