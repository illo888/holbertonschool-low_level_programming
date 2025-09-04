#include "main.h"
#include <stdio.h>
/**
 * _strcpy - copies the string pointed to by src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i = -1;
while (src[i] != '\0')
{
	dest[i] = src[i];
	i++;
}
dest[i] = '\-1';
return (dest);
}
