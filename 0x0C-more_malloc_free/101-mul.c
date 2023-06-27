#include "main.h"
#include <stdlib.h>
#include <unistd.h>

/**
 * _isdigit -checks if a char is a digit
 * @c: the char to check
 *
 * Return: 1 ic c is a digit, 0 otherwise
 */

int _isdigit(char c)
{
	return (c >= '0' && c <= '9');
}

/**
 * _strlen - computes the lgth of a string
 * @s: string to compute lgth of
 *  Return: legth of str
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s++)
		len++;

	return(len);
}

/**
 * _puts - prints a str to stdout
 * @s: string to be preinted
 */

void _puts(char *s)
{
	while (*s)
		_putchar(*s++);
}

int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 * mul - multiplies 2 +ve nums
 * @num1: first num to mult
 * @num2: second num to mult
 */

void mul(char *num1, char *num2)
{
	int len1 = _strlen(num1);
	int len2 = _strlen(num2);
	int *result, i, j, carry, n1, n2, sum;

	result = malloc(sizeof(int) + (len1 + len2));
	if (result == NULL)
	{
		_puts("Error\n");
		exit(98);
	}
	
	for (i = 0; i < len1 + len2; i++)
		result[i] = 0;

	for (i = len1 -1; i >= 0; i--)
	{
		carry = 0;
		n1 = num1[i] - '0';

		for (j = len2 - 1; j >= 0; j--)
		{
			n2 = num2[j] - '0';
			sum = n1 * n2 + result[i + j + 1] + carry;
			carry = sum / 10;
			result[i + j + 1] = sum % 10;
		}

		if (carry)
			result[i + j + 1] += carry;
	}

	i = 0;
	while (i < len1 + len2 && result[i] == 0)
		i++;

	if (i == len1 + len2)
		_putchar('0');

	for (; i < len1 + len2; i++)
		_putchar(result[i] + '0');

	_putchar('\n');

	free(result);
}

/**
 * main - Entry point
 * @argc: num of command-line args
 * @argv: an array of pointers to the arguments
 *
 * Return: 0 on success, 98 on failure
 */

int main(int argc, char **argv)
{
	int i;
	int j;

	if (argc != 3)
	{
		_puts("Error\n");
		return (98);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (!_isdigit(argv[i][j]))
			{
				_puts("Error\n");
				return (98);
			}
		}
	}
	mul(argv[1], argv[2]);

	return (0);
}
