#include <stdlib.h>
#include <string.h>

/**
 * argstostr - Concatenates all arguments of the program into a single string
 * @ac: Argument count
 * @av: Argument vector
 *
 * Return: Pointer to the new string, or NULL on failure
 */
char *argstostr(int ac, char **av)
{
    int i, j, len = 0, pos = 0;
    char *str;

    if (ac == 0 || av == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
        len += strlen(av[i]) + 1;

    str = malloc(sizeof(char) * (len + 1));
    if (str == NULL)
        return (NULL);

    for (i = 0; i < ac; i++)
    {
        for (j = 0; av[i][j]; j++)
            str[pos++] = av[i][j];
        str[pos++] = '\n';
    }

    str[pos] = '\0';
    return (str);
}
