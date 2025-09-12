#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    char *s = "Bob Dylan";
    char *f = "Robert Allen";

    printf("%s\n", s);
    set_string(&s, f);
    printf("%s\n", s);

    return (0);
}
