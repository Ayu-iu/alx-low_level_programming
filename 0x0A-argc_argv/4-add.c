#include "main.h"
#include <stdio.h>

/**
 * is_digit - Checks if a character is a digit
 * @c: The character to check
 *
 * Return: 1 if the character is a digit, otherwise 0
 */
int is_digit(char c)
{
return (c >= '0' && c <= '9');
}

/**
 * main - Entry point
 * @argc: The number of command line arguments
 * @argv: Array containing the command line arguments
 *
 * Return: 0 on success, 1 on error
 */
int main(int argc, char *argv[])
{
int i, sum = 0;

if (argc == 1)
{
printf("0\n");
return 0;
}

for (i = 1; i < argc; i++)
{
int j = 0;

while (argv[i][j] != '\0')
{
if (!is_digit(argv[i][j]))
{
printf("Error\n");
return 1;
}
j++;
}

sum += atoi(argv[i]);
}

printf("%d\n", sum);

return 0;
}
