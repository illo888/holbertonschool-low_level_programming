#include "main.h"
#include <stdlib.h>

/**
* create_array - Creates an array of chars, and initializes it with a specific char
* @size: The size of the array to create
* @c: The char to initialize the array with
*
* Return: Pointer to the array, or NULL if size is 0 or if allocation fails
*/
char *create_array(unsigned int size, char c)
{
char *buffer;
unsigned int i;

if (size == 0)
return (NULL);

buffer = malloc(sizeof(char) * size);
if (buffer == NULL)
return (NULL);

for (i = 0; i < size; i++)
buffer[i] = c;

return (buffer);
}
