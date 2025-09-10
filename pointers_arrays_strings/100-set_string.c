#include "main.h"
#include <stdio.h>

/**
 * set_string - sets the value of a pointer to a char
 * @s: pointer to a pointer to a char
 * @to: pointer to the char we want to point to
 */
void set_string(char **s, char *to)
{
    *s = to;
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "Bob Dylan";
    char *f = "Robert Allen";

    printf("Before: %s, %s\n", s, f);
    set_string(&s, f);
    printf("After: %s, %s\n", s, f);

    return (0);
}

