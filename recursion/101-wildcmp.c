#include "main.h"

/**
 * wildcmp - compares two strings, allowing wildcard '*' in s2
 * @s1: the first string
 * @s2: the second string (may contain '*')
 *
 * Return: 1 if identical, 0 otherwise
 */
int wildcmp(char *s1, char *s2)
{
    if (*s2 == '\0')
        return (*s1 == '\0');

    if (*s2 == '*')
    {
        if (*(s2 + 1) == '\0')
            return (1);
        if (wildcmp(s1, s2 + 1))
            return (1);
        return (*s1 != '\0' && wildcmp(s1 + 1, s2));
    }

    if (*s1 == *s2)
        return (wildcmp(s1 + 1, s2 + 1));

    return (0);
}
