#include <stdlib.h>

/**
* count_words - counts words separated by spaces in a string
* @str: input string
*
* Return: number of words found
*/
int count_words(char *str)
{
int i = 0, count = 0;

while (str[i])
{
while (str[i] == ' ')
i++;
if (str[i])
count++;
while (str[i] && str[i] != ' ')
i++;
}

return (count);
}

char **strtow(char *str)
{
char **words;
int i = 0, j = 0, k = 0, start = 0, end = 0, wc = 0;

if (str == NULL || *str == '\0')
return (NULL);

wc = count_words(str);
if (wc == 0)
return (NULL);

words = malloc(sizeof(char *) * (wc + 1));
if (words == NULL)
return (NULL);

while (str[i])
{
while (str[i] == ' ')
i++;
start = i;
while (str[i] && str[i] != ' ')
i++;
end = i;

if (end > start)
{
words[k] = malloc(sizeof(char) * (end - start + 1));
if (words[k] == NULL)
{
while (k > 0)
free(words[--k]);
free(words);
return (NULL);
}

for (j = 0; start < end; start++, j++)
words[k][j] = str[start];
words[k][j] = '\0';
k++;
}
}

words[k] = NULL;
return (words);
}
