#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
* _realloc - reallocates a memory block using malloc and free
* @ptr: pointer to the previously allocated memory
* @old_size: size of the previously allocated memory
* @new_size: size of the new memory block
*
* Return: pointer to the newly allocated memory,
*         or NULL if allocation fails or new_size is 0
*/

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
char *new_ptr;
unsigned int i;

if (new_size == old_size)
return (ptr);

if (ptr == NULL)
return (malloc(new_size));

if (new_size == 0 && ptr != NULL)
{
free(ptr);
return (NULL);
}

new_ptr = malloc(new_size);
if (new_ptr == NULL)
return (NULL);

for (i = 0; i < (old_size < new_size ? old_size : new_size); i++)
new_ptr[i] = ((char *)ptr)[i];

free(ptr);
return (new_ptr);
}
