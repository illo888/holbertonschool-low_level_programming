#include "main.h"
#include <stdio.h>
/**
 * main - check the code
 *
 * Return: Always 0.
 */
void set_string(char **s, char *to);
{
    *s = to;
}
int main() {
{
    char *s = "Bob Dylan";
    char *f = "Robert Allen";

    printf("Before: %s, %s\n", s, f);
     set_string(&s, f);
      printf("After: %s, %s\n", s, f);
       return 0;
}
