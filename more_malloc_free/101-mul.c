#include <stdio.h>
#include <stdlib.h>

/**
* is_digit - checks if a string contains only digits
* @s: input string
*
* Return: 1 if all characters are digits, 0 otherwise
*/
int is_digit(char *s)
{
int i = 0;

while (s[i])
{
if (s[i] < '0' || s[i] > '9')
return (0);
i++;
}

return (1);
}

/**
* _strlen - returns the length of a string
* @s: input string
*
* Return: length of the string
*/
int _strlen(char *s)
{
int i = 0;

while (s[i])
i++;

return (i);
}
void print_error(void)
{
printf("Error\n");
exit(98);
}
int main(int argc, char *argv[])
{
char *num1, *num2;
int len1, len2, i, j, *result, digit1, digit2, carry, sum;

if (argc != 3)
print_error();

num1 = argv[1];
num2 = argv[2];

if (!is_digit(num1) || !is_digit(num2))
print_error();

len1 = _strlen(num1);
len2 = _strlen(num2);
result = calloc(len1 + len2, sizeof(int));
if (result == NULL)
print_error();

for (i = len1 - 1; i >= 0; i--)
{
digit1 = num1[i] - '0';
carry = 0;
for (j = len2 - 1; j >= 0; j--)
{
digit2 = num2[j] - '0';
sum = result[i + j + 1] + digit1 * digit2 + carry;
result[i + j + 1] = sum % 10;
carry = sum / 10;
}
result[i + j + 1] += carry;
}

i = 0;
while (i < len1 + len2 && result[i] == 0)
i++;

if (i == len1 + len2)
printf("0");
else
while (i < len1 + len2)
printf("%d", result[i++]);

printf("\n");
free(result);
return (0);
}
